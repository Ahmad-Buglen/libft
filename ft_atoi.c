/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphyliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/20 11:55:05 by dphyliss          #+#    #+#             */
/*   Updated: 2019/05/02 11:17:17 by dphyliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_atoi(const char *str)
{
	size_t		i;
	long int	n;
	int			sign;

	n = 0;
	i = 0;
	while ((*str == ' ') || (*str == '\n') || (*str == '\t') 
			|| (*str == '\f') || (*str == '\r') || (*str == '\v'))
		++str;
	sign = (*str == '-') ? -1 : 1;
	((*str == '-') || (*str == '+')) ? ++str : 0;
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		if (((n * 10) / 10) != n)
			return ((sign == -1) ? 0 : -1);
		n = 10 * n + (str[i] - '0');
		i++;
	}
	return ((sign == -1) ? -n : n);
}
/*
int main()
{
	printf("%d \n", atoi(" -"));
	printf("%d \n", ft_atoi(" -"));
	return (0);
}
*/
