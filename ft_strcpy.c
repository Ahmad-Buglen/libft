/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphyliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 13:14:28 by dphyliss          #+#    #+#             */
/*   Updated: 2019/04/24 15:02:18 by dphyliss         ###   ########.fr       */
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
		dst[i + 1] = '\0';
		free(buffer);
	}
	else if (src[0] == '\0')
		dst[0] = '\0';
	return (dst);
}
/*
int main()
{
//	char	dest[11];
	char 	*src = "1234567890";
	char 	*dest0;
	dest0 = src;
	printf("%s \n", strcpy(dest0, src));
//	char	dest1[11];	
	char 	*src1 = "1234567890";
	char	*dest01;
	dest01 = src1;
	printf("%s \n", ft_strcpy(dest01, src1));
	return (0);
}
*/
