/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphyliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 18:57:57 by dphyliss          #+#    #+#             */
/*   Updated: 2019/04/16 15:44:43 by dphyliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlen(const char *s)
{
	size_t	i;

	if (s)
	{
		i = 0;
		while ((s[i] != '\0') && (i < 65535))
		{
			i++;
		}
		return (i);
	}
	return (0);
}
