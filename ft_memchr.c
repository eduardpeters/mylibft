/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epeters- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 16:03:15 by epeters-          #+#    #+#             */
/*   Updated: 2021/01/23 16:51:03 by epeters-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	if (s)
	{
		i = 0;
		while (i < n)
		{
			if (*(unsigned char *)(s + i) == (unsigned char)(c))
				return ((void *)(s + i));
			i++;
		}
	}
	return (NULL);
}
