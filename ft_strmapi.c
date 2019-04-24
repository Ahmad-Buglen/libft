/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphyliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/20 18:29:35 by dphyliss          #+#    #+#             */
/*   Updated: 2019/04/24 14:55:42 by dphyliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	length;
	char	*point;

	if (s && (f != NULL))
	{
		length = ft_strlen(s);
		point = (char *)malloc(sizeof(char) * length);
		if (point == NULL)
			return (NULL);
		else
		{
			i = -1;
			while (s[++i] != '\0')
				point[i] = f(i, s[i]);
			return (point);
		}
	}
	return (NULL);
}
