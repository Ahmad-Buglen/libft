/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphyliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 15:24:05 by dphyliss          #+#    #+#             */
/*   Updated: 2019/04/19 19:08:11 by dphyliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	if ((src != NULL) && (dst != NULL) && (size > 1))
	{
		i = ft_strlen(dst);
		j = 0;
		while ((src[j] != '\0') && (j < size))
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i + 1] = '\0';
		return (ft_strlen(dst));
	}
	else if (dst == NULL)
		return (0);
	else if (src == NULL)
		return (ft_strlen(dst));
	return (0);
}
