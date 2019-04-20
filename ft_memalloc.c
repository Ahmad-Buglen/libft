/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphyliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/20 16:47:11 by dphyliss          #+#    #+#             */
/*   Updated: 2019/04/20 16:58:01 by dphyliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memalloc(size_t size)
{
	size_t	i;
	void	*point;

	point = (void *)malloc(sizeof(void) * size);
	if (point == NULL)
		return (NULL);
	else
	{
		i = -1;
		while (++i < size)
			((int *)point)[i] = 0;
		return ((void *)point);
	}
}
