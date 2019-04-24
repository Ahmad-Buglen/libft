/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphyliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 09:52:41 by dphyliss          #+#    #+#             */
/*   Updated: 2019/04/24 14:39:00 by dphyliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

size_t		count_substr(char const *s, char c)
{
	size_t	i;
	size_t	counter;

	counter = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			++i;
		if ((s[i] != c) && (s[i] != '\0'))
		{
			while ((s[i] != c) && (s[i] != '\0'))
				++i;
			++counter;
			--i;
		}
		++i;
	}
	return (counter);
}

char		**check_pointer(char const *s, char c, size_t size)
{
	char	**str;
	char	*buf;
	size_t	i;
	size_t	j;

	str = (char **)ft_memalloc(sizeof(char *) * size + 1);
	if (NULL == str)
		return (NULL);
	i = 0;
	j = 0;
	buf = ft_strdup(s);
	if (NULL == buf)
		return (NULL);
	while (buf[i] != '\0')
	{
		while (buf[i] == c)
			i++;
		if (buf[i] != '\0')
			str[j++] = &buf[i];
		while ((buf[i] != c) && (buf[i] != '\0'))
			++i;
	}
	*str[0] = '\0';
	free(buf);
	return (str);
}

void	memory_free(char **s)
{
	free(s);
	s = NULL;
}

char		**memory_allocate(char **s, char c, size_t size)
{
	 write(1, "0_o", 3);
	size_t	i;
	size_t	j;
	char	*buffer;
	
	j = 0;
	while (s[j] != '\0')
	{
		printf("---");
		i = 0;
		while ((s[j][i] != c) && (s[j][i] != '\0'))
			i++;
		printf("---");
		buffer = ft_strdup(s[j]);
		s[j] = (char *)malloc(sizeof(char) * (++i) + 1);
		if ((NULL == s[j]) || (NULL == buffer))
		{
			memory_free(s);
			free(buffer);
			return (NULL);
		}
		i = 0;
		while ((buffer[i] != c) && (buffer[i] != '\0'))
		{
			s[j][i] = buffer[i];
			printf("%c ",buffer[i]);
			i++;
		}
		s[j][++i] = '\0';
		++j;
		free(buffer);
	}
	++size;
	--size;
	return (s);
}
// ft_strsplit("*hello*fellow***students*", ’*’)
char		**ft_strsplit(char const *s, char c)
{
	size_t	i;
	char	**str;

	if (s && c)
	{
		i = count_substr(s, c);
		if (0 == i)
			return (NULL);
		str = check_pointer(s, c, i);
	}
	return (NULL);
}

int main()
{
	char **test1;
	char **test;
	test = check_pointer("*hello*fellow***students*", '*', 3);
	ft_putendl("here");
	test1 = memory_allocate(test, '*', 3);
	int i = -1;
	while (++i < 3)
		printf("%s\n", test1[i]);

//	char **test;
//	test = check_pointer("*hello*fellow***students*", '*', 3);
//	int i = 2;
//	while (i >= 0)
//	{
//		printf("%s\n", test[i]);
//		--i;
//	}

	

//	printf("%d\n", (int)count_substr("*hello*fellow***students*", '*'));
//	printf("%d\n", (int)count_substr("*hello*fellow***students*", '-'));
//	printf("%d\n", (int)count_substr("", '*'));
//	printf("%d\n", (int)count_substr("******", '*'));\
//	printf("%d\n", (int)count_substr("hellofellowstudents", '*'));
	return (0);
}
