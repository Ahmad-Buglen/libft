/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphyliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 15:24:05 by dphyliss          #+#    #+#             */
/*   Updated: 2019/04/22 11:29:10 by dphyliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

#include <stdio.h>
#include <string.h>

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	char	*buffer;
	printf("---");
	if ((src) && (dst))
	{
		printf("---");
/**/	buffer = strdup(src);
		if (buffer == NULL)
			return (0);
/**/		i = strlen(dst);
		printf("%zu", i);
		j = 0;
		while ((buffer[j] != '\0') && (j < size))
		{
			dst[i] = buffer[j];
			i++;
			j++;
		}
		dst[i + 1] = '\0';
/**/	return (strlen(dst));
	}
	else if (dst)
		return (0);
	else if (src)
/**/	return (strlen(dst));
	return (0);
}

int main()
{
//	char	*dst = "test";
//	char	*src = "asdf";
	printf("---");
//	printf("%zu \n", strlcat(dst, src, 4));

	printf("---");
//	char	*dst1 = "test";
	char	*src1 = "asdf"; //= "asdf";
	printf("---");
	printf("%d \n", (int)ft_strlcat("test", src1, 4));
	return (0);
}
