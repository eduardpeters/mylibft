/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epeters- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 19:00:11 by epeters-          #+#    #+#             */
/*   Updated: 2021/01/23 20:10:56 by epeters-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	size_t			size;
	unsigned int	u_nbr;
	char			*str;

	size = n < 0 ? 3 : 2;
	u_nbr = n < 0 ? (unsigned int)(n * -1) : (unsigned int)(n);
	while ((u_nbr = u_nbr / 10))
	{
		size++;
	}
	if (!(str = (char *)(malloc(sizeof(*str) * size))))
		return (NULL);
	u_nbr = n < 0 ? (unsigned int)(n * -1) : (unsigned int)(n);
	str[size - 1] = '\0';
	size -= 2;
	while (size > 0)
	{
		str[size] = '0' + (u_nbr % 10);
		u_nbr = u_nbr / 10;
		size--;
	}
	str[size] = n < 0 ? '-' : '0' + (u_nbr % 10);
	return (str);
}
