/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphyliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 12:16:43 by dphyliss          #+#    #+#             */
/*   Updated: 2019/04/18 14:36:09 by dphyliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	if ((c > 0) && (s != NULL))
	{
		i = 0;
		while (s[i] != '\0')
		{
			if (s[i] == (char)c)
				return ((char *)s + i);
			i++;
		}
	}
	else if (('\0' == (char)c) && (s != NULL))
	{
		i = 0;
		while (s[i] != '\0')
			i++;
		return ((char *)s + i);
	}
	return (NULL);
}
