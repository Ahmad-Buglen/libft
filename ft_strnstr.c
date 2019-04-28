/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphyliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 20:22:29 by dphyliss          #+#    #+#             */
/*   Updated: 2019/04/28 14:25:51 by dphyliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	j;

	if (needle[0] == '\0')
		return ((char *)haystack);
	else
	{
		i = -1;
		while ((haystack[++i] != '\0') && (i < (int)len))
			if (haystack[i] == needle[0])
			{
				j = 1;
				while ((haystack[++i] == needle[j]) && (haystack[i] != '\0') \
						&& (needle[j] != '\0') && (i < (int)len))
					j++;
				if (j == (int)ft_strlen(needle))
					return ((char *)haystack + i - j);
				else
					i -= j;
			}
		return (NULL);
	}
}
