/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphyliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 16:04:55 by dphyliss          #+#    #+#             */
/*   Updated: 2019/04/16 16:09:37 by dphyliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	size_t	i;
	size_t	j;

	if (s2 && (n > 0))
	{
		i = 0;
		while (s1[i] != '\0')
			i++;
		j = 0;
		while (s2[j] != '\0' && (j < n))
		{
			s1[i] = s2[j];
			j++;
			i++;
		}
		s1[i] = '\0';
	}
	return (s1);
}
