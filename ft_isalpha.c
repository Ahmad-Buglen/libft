/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphyliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/20 13:31:08 by dphyliss          #+#    #+#             */
/*   Updated: 2019/04/20 14:06:25 by dphyliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((((unsigned char)c >= 'A') && ((unsigned char)c <= 'Z')) \
			|| (((unsigned char)c >= 'a') && ((unsigned char)c <= 'z')))
		return (1);
	return (0);
}
