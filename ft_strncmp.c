/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epeters- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 19:07:49 by epeters-          #+#    #+#             */
/*   Updated: 2021/01/22 19:15:35 by epeters-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] && s2[i] && (s1[i] == s2[i]) && i < (n - 1))
		i++;
	if ((unsigned char)(s1[i]) - (unsigned char)(s2[i]) > 0)
		return (1);
	else if ((unsigned char)(s1[i]) - (unsigned char)(s2[i]) < 0)
		return (-1);
	return (0);
}
