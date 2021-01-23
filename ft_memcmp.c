/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epeters- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 16:39:18 by epeters-          #+#    #+#             */
/*   Updated: 2021/01/23 16:52:00 by epeters-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	int		diff;

	i = 0;
	if (s1 && s2)
	{
		while (i < n)
		{
			diff = *(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i);
			if (diff != 0)
				return (diff);
			i++;
		}
	}
	return (0);
}
