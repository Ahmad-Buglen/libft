/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphyliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 14:55:48 by dphyliss          #+#    #+#             */
/*   Updated: 2019/04/14 16:04:59 by dphyliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*duplicate;

	if (src)
	{
		i = 0;
		while (src[i] != '\0')
			i++;
		duplicate = (char *)malloc(sizeof(char) * i + 1);
		if (duplicate == NULL)
			return (NULL);
		j = 0;
		while (j <= i)
		{
			duplicate[j] = src[j];
			j++;
		}
		duplicate[j + 1] = '\0';
		return (duplicate);
	}
	return (NULL);
}
