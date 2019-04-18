/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphyliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 12:16:43 by dphyliss          #+#    #+#             */
/*   Updated: 2019/04/18 15:04:18 by dphyliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int j;

	if ((c > 0) && (s != NULL))
	{
		i = -1;
		j = -1;
		while (s[++i] != '\0')
			if (s[i] == (char)c)
				j = i;
		if (j >= 0)
			return ((char *)s + j);
		else
			return (NULL);
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
