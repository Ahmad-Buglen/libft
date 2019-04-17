/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphyliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 13:14:28 by dphyliss          #+#    #+#             */
/*   Updated: 2019/04/17 13:38:06 by dphyliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strcpy(char *dst, const char *src)
{
	size_t	i;

	if (src)
	{
		i = 0;
		while (src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i + 1] = '\0';
	}
	else if (src[0] == '\0')
		dst[0] = '\0';
	else if (src == NULL)
		dst = NULL;
	return (dst);
}
