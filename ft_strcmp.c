/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphyliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 18:20:37 by dphyliss          #+#    #+#             */
/*   Updated: 2019/04/19 19:04:36 by dphyliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strcmp(const char *s1, const char *s2)
{
	size_t	i;

	i = -1;
	while ((s1[++i] != '\0') && (s2[i] != '\0') && (s1[i] == s2[i]))
		continue;
	return (s1[i] - s2[i]);
}
