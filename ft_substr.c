/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epeters- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 14:48:27 by epeters-          #+#    #+#             */
/*   Updated: 2021/01/26 19:11:13 by epeters-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	j;

	if (!(str = (char *)(malloc(sizeof(*str) * (len + 1)))))
		return (NULL);
	j = 0;
	if (start < ft_strlen(s))
	{
		i = start;
		while (s[i] && j < len)
		{
			str[j] = s[i];
			i++;
			j++;
		}
	}
	while (j < (len + 1))
	{
		str[j] = '\0';
		j++;
	}
	return (str);
}
