/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epeters- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 15:04:50 by epeters-          #+#    #+#             */
/*   Updated: 2021/01/25 16:16:29 by epeters-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wordlen(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (*s)
	{
		if (*s == c)
			return (len);
		len++;
		s++;
	}
	return (len);
}

static size_t	ft_wordcount(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s && *s == c)
		s++;
	while (*s)
	{
		if (*s == c)
		{
			count++;
			while (*s && *s == c)
				s++;
		}
		else
		{
			if (*(s + 1) == 0)
				count++;
			s++;
		}
	}
	return (count);
}

char			**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	count;
	size_t	len;
	size_t	i;

	count = ft_wordcount(s, c);
	if (!(tab = (char **)(malloc(sizeof(*tab) * (count + 1)))))
		return (NULL);
	i = 0;
	while (i < count)
	{
		while (*s && *s == c)
			s++;
		len = ft_wordlen(s, c);
		if (!(tab[i] = (char *)(malloc(sizeof(**tab) * (len + 1)))))
			return (NULL);
		ft_strlcpy(tab[i], s, len + 1);
		s += len;
		i++;
	}
	tab[i] = 0;
	return (tab);
}
