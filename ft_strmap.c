/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphyliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/20 18:15:24 by dphyliss          #+#    #+#             */
/*   Updated: 2019/04/20 18:28:47 by dphyliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	int		length;
	char	*point;

	if (s)
	{
		length = ft_strlen(s);
		point = (char *)malloc(sizeof(char) * length);
		if (point == NULL)
			return (NULL);
		else
		{
			i = -1;
			while (s[++i] != '\0')
				point[i] = f(s[i]);
			return (point);
		}
	}
	return (NULL);
}
