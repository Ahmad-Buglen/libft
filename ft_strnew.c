/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphyliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/20 17:14:19 by dphyliss          #+#    #+#             */
/*   Updated: 2019/04/29 14:48:47 by dphyliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnew(size_t size)
{
	size_t	i;
	char	*point;

	if (9223372036854775807 == size)
		return (NULL);
	point = (char *)malloc(sizeof(char) * size + 1);
	if (point == NULL)
		return (NULL);
	else
	{
		i = 0;
		while (i <= size)
		{
			point[i] = '\0';
			i++;
		}
		return (point);
	}
}
