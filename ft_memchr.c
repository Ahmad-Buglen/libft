/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphyliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 13:17:19 by dphyliss          #+#    #+#             */
/*   Updated: 2019/04/16 13:24:53 by dphyliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	if (s)
	{
		i = 0;
		while (i < n)
		{
			if (((unsigned char *)s)[i] == (unsigned char)c)
				return ((void *)s + i);
			i++;
		}
	}
	return (NULL);
}
