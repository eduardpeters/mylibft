/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epeters- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 15:13:14 by epeters-          #+#    #+#             */
/*   Updated: 2021/01/26 19:58:17 by epeters-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (dst && src)
	{
		if (src < dst && dst < (src + len))
		{
			while (len)
			{
				len--;
				*(unsigned char *)(dst + len) = *(unsigned char *)(src + len);
			}
		}
		else
			ft_memcpy(dst, src, len);
	}
	return (dst);
}
