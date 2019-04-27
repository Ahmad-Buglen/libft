/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphyliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 13:14:28 by dphyliss          #+#    #+#             */
/*   Updated: 2019/04/27 11:48:20 by dphyliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

char		*ft_strcpy(char *dst, const char *src)
{
	size_t	i;
	char	*buffer;

	if (src)
	{
		buffer = ft_strdup(src);
		i = 0;
		while (buffer[i] != '\0')
		{
			dst[i] = buffer[i];
			i++;
		}
		dst[i] = '\0';
		free(buffer);
	}
	else if (src[0] == '\0')
		dst[0] = '\0';
	return (dst);
}
