/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphyliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/20 17:14:19 by dphyliss          #+#    #+#             */
/*   Updated: 2019/04/22 12:32:08 by dphyliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnew(size_t size)
{
	size_t	i;
	char	*point;

	point = (char *)malloc(sizeof(char) * size);
	if ((point == NULL) || (size > 65535))
		return (NULL);
	else
	{
		i = -1;
		while (++i < size)
			point[i] = '\0';
		return (point);
	}
}
