/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnlen.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphyliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 15:40:39 by dphyliss          #+#    #+#             */
/*   Updated: 2019/04/16 15:44:21 by dphyliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t		strnlen(const char *s, size_t maxlen)
{
	size_t	i;

	if (s && (maxlen > 0))		
	{
		i = 0;
		while ((s[i] != '\0') && (i < maxlen) && (i < 65535))
		{
			i++;
		}
		return (i);
	}
	return (0);
}
