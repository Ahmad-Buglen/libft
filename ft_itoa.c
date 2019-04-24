/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphyliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 15:06:05 by dphyliss          #+#    #+#             */
/*   Updated: 2019/04/24 20:04:39 by dphyliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

char		*ft_itoa(int n)
{
	char	*s;
	char	*buffer;
	int		i;
	size_t	j;
	int		sign;

	s = (char *)malloc(sizeof(char) * (size_t) 12);
	if (NULL == s)
		return (NULL);
	if (n == 0)
		return ("0");
	else if (n == -2147483648)
		return ("-2147483648");
	i = 0;
	(n < 0) ? sign = 1 : 0 ;
	(n < 0) ? n = -n : 0;;
	while (n)
	{
		s[i++] = ('0' + (n % 10));
		n /= 10;
	}
	s[i] = '\0';
	buffer = ft_strdup(s);
	if (NULL == buffer)
		return (NULL);
	j = 0;
	(sign == 1) ? s[j++] = '-': 0;
	while (--i >= 0)
		(i == (int)j) ? 0 : ft_swap_char(&s[j++], &s[i]);
		//		s[j++] = buffer[i];
	s[j] = '\0';
	return (s);
}
//  2147483647

int main()
{
	printf("%s\n", ft_itoa(2342349));
	printf("%s\n", ft_itoa(2147483647));
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(-235239));
	return (0);
}

