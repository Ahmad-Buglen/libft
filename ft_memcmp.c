/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphyliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 13:32:47 by dphyliss          #+#    #+#             */
/*   Updated: 2019/04/16 13:54:06 by dphyliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	if (s1 && s2 && (n > 0))
	{
		i = 0;
		while (i < n)
		{
			if (((unsigned const char *)s1)[i] != \
					((unsigned const char *)s2)[i])
			{
				return (((unsigned const char *)s1)[i] - \
						((unsigned const char *)s2)[i]);
			}
			i++;
		}
	}
	else if (s1 == s2)
		return (0);
	else if (s1 == NULL)
		return ((int)('0' - (unsigned const char)s2));
	else if (s2 == NULL)
		return ((int)('0' - (unsigned const char)s1));
	return (0);
}
