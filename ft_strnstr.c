/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphyliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 20:22:29 by dphyliss          #+#    #+#             */
/*   Updated: 2019/04/19 20:22:35 by dphyliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if ((needle == NULL) || (needle[0] == '\0'))
		return ((char *)haystack);
	else
	{
		i = -1;
		while ((haystack[++i] != '\0') && (i < len))
			if (haystack[i] == needle[0])
			{
				j = 1;
				while ((haystack[++i] == needle[j]) && (haystack[i] != '\0') \
						&& (needle[j] != '\0') && (i < len))
					j++;
				if ((size_t)j == ft_strlen(needle))
					return ((char *)haystack + i - j);
				else
					i -= j;
			}
		return (NULL);
	}
}
