/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphyliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 08:14:12 by dphyliss          #+#    #+#             */
/*   Updated: 2019/04/27 12:35:00 by dphyliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	char	*str;
	char	*buf;

	if (s)
	{
		buf = ft_strdup(s);
		if (NULL == buf)
			return (NULL);
		while (((*buf == ' ') || (*buf == '\n') || (*buf == '\t')) && *buf)
			*(buf++) = '\0';
		if (!buf)
			return (buf);
		else
		{
			str = &buf[ft_strlen(buf) - 1];
			while ((*str == ' ') || (*str == '\n') || (*str == '\t'))
				*(str--) = '\0';
			return (buf);
		}
	}
	return (NULL);
}
