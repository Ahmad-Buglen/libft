/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphyliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 14:55:48 by dphyliss          #+#    #+#             */
/*   Updated: 2019/04/22 11:36:04 by dphyliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s1)
{
	int		i;
	int		j;
	char	*duplicate;

	if (s1)
	{
		i = 0;
		while (s1[i] != '\0')
			i++;
		duplicate = (char *)malloc(sizeof(char) * i + 1);
		if (duplicate == NULL)
			return (NULL);
		j = 0;
		while (j <= i)
		{
			duplicate[j] = s1[j];
			j++;
		}
		duplicate[j + 1] = '\0';
		return (duplicate);
	}
	return (NULL);
}
