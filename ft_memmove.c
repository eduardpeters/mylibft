/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epeters- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 15:13:14 by epeters-          #+#    #+#             */
/*   Updated: 2021/01/23 15:52:52 by epeters-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*temp;

	if (dst && src)
	{
		if (!(temp = malloc(sizeof(*temp) * len)))
			return (NULL);
		ft_memcpy(temp, src, len);
		ft_memcpy(dst, temp, len);
		free(temp);
	}
	return (dst);
}
