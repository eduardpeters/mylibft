/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epeters- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 20:13:45 by epeters-          #+#    #+#             */
/*   Updated: 2021/01/25 14:47:41 by epeters-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char			str[12];
	unsigned int	digits;
	unsigned int	u_nbr;

	digits = n < 0 ? 3 : 2;
	u_nbr = n < 0 ? (unsigned int)(n * -1) : (unsigned int)(n);
	while ((u_nbr = u_nbr / 10))
		digits++;
	u_nbr = n < 0 ? (unsigned int)(n * -1) : (unsigned int)(n);
	str[digits - 1] = '\0';
	digits -= 2;
	while (digits > 0)
	{
		str[digits] = '0' + (u_nbr % 10);
		u_nbr = u_nbr / 10;
		digits--;
	}
	str[digits] = n < 0 ? '-' : '0' + (u_nbr % 10);
	ft_putstr_fd(str, fd);
}
