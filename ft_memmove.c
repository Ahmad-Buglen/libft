/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphyliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 15:44:16 by dphyliss          #+#    #+#             */
/*   Updated: 2019/04/21 17:35:21 by dphyliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	buffer[len];

	if (src)
	{
		i = 0;
		while (i < len)
		{
			((unsigned char *)buffer)[i] = ((unsigned char *)src)[i];
			i++;
		}
		i = 0;
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)buffer)[i];
			i++;
		}
	}
	return ((void *)dst);
}
