/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epeters- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 17:53:16 by epeters-          #+#    #+#             */
/*   Updated: 2021/01/22 17:53:26 by epeters-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr_s;
	int		i;

	i = ft_strlen(s);
	ptr_s = (char *)(s);
	while (i >= 0)
	{
		if (*(ptr_s + i) == c)
			return (ptr_s + i);
		i--;
	}
	return (NULL);
}
