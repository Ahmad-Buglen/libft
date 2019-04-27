/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphyliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 11:47:27 by dphyliss          #+#    #+#             */
/*   Updated: 2019/04/27 11:47:41 by dphyliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	if (s1 && s2)
	{
		i = 0;
		while (s1[i] && s2[i] && (s1[i] == s2[i]))
		{
			if (i + 1 == n)
				return (0);
			i++;
		}
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	return (0);
}
