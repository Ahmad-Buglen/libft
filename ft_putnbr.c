/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphyliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 16:11:01 by dphyliss          #+#    #+#             */
/*   Updated: 2019/04/23 16:31:54 by dphyliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_reverse(char *str, int index)
{
	char	str1[11];
	int		temp;

	index--;
	temp = 0;
	while (str[temp] != '\0')
	{
		str1[temp] = str[index];
		index--;
		temp++;
	}
	index = 0;
	while (str[index] != '\0')
	{
		str[index] = str1[index];
		index++;
	}
}

int	ft_optime(int nb)
{
	if (nb == -2147483648)
	{
		ft_putstr("-2147483648");
		return (1);
	}
	else if (nb == 0)
	{
		ft_putchar('0');
		return (1);
	}
	else
	{
		return (0);
	}
}

void			ft_putnbr(int n)
{
	char	str[11];
	int		index;
	int		i;

	i = ft_optime(n);
	if (i != 1)
	{
		index = 0;
		if (n < 0)
		{
			ft_putchar('-');
			n = -n;
		}
		while (n)
		{
			str[index] = ('0' + (n % 10));
			n /= 10;
			index++;
		}
		str[index] = '\0';
		ft_reverse(str, index);
		ft_putstr(str);
	}
}
