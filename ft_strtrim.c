/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphyliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 08:14:12 by dphyliss          #+#    #+#             */
/*   Updated: 2019/04/23 09:52:19 by dphyliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

char		*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*str;
	
	if (s)
	{
		i = 0;
		while (((s[i] == ' ') || (s[i] == '\n') || (s[i] == '\f') \
				|| (s[i] == '\t') || (s[i] == '\r') || (s[i] == '\v')) \
					&& (s[i] != '\0'))
			i++;
		if (s[i] == '\0')
		{
			str = (char *)malloc(sizeof(char) * 1);
			if (str == NULL) 
				return (NULL);
			str[0] = '\0';
			return (str);
		}
		else 
		{
			j = ft_strlen(s) - 1;
			while ((s[j] == ' ') || (s[j] == '\n') || (s[j] == '\t') \
					|| (s[i] == '\r') || (s[i] == '\v') || (s[i] == '\f'))
				j--;
			str = (char *)malloc(sizeof(char) * (j - i) + 1);
			if (str == NULL)
				return (NULL);
			k = 0;
			while (i <= j)
				str[k++] = s[i++];
			str[++i] = '\0';
			return (str);
		}
	}
	return (NULL);
}
/*
int main()
{
	printf("%s\n", ft_strtrim("  \t \n asdf \t  \n   "));
	return (0);
}*/
