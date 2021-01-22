/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epeters- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 16:10:01 by epeters-          #+#    #+#             */
/*   Updated: 2021/01/22 17:52:29 by epeters-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptr_s;

	ptr_s = (char *)(s);
	if (c == 0)
		return (ptr_s + ft_strlen(s));
	while (*ptr_s)
	{
		if (*ptr_s == c)
			return (ptr_s);
		ptr_s++;
	}
	return (NULL);
}
