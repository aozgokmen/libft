/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozgokme <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 20:37:31 by aozgokme          #+#    #+#             */
/*   Updated: 2022/01/22 14:19:42 by aozgokme         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_word_count(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (count);
}

static char	**ft_free_ptr(char **s, int i)
{
	while (--i >= 0 && s[i])
	{
		free(s[i]);
		s[i] = NULL;
	}
	free(s);
	s = NULL;
	return (NULL);
}

const char	*nexts(char const *s, char c)
{
	while (*s && *s != c)
		++s;
	return (s);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	*from;
	char	**buf;

	if (!s)
		return (NULL);
	i = 0;
	buf = (char **)malloc((ft_word_count(s, c) + 1) * sizeof(char *));
	if (!buf)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			from = (char *)s;
			s = nexts(s, c);
			buf[i++] = ft_substr(from, 0, (s - from));
			if (!buf)
				return (ft_free_ptr(buf, i));
		}
		else
			++s;
	}
	buf[i] = NULL;
	return (buf);
}
/*
int main(void)
{
	char *str = "*merhaba**kevser***kocaaga**";
	char **splt;

	splt = ft_split(str, '*');
	printf("%s\n", splt[0]);
	printf("%s\n", splt[1]);
	printf("%s\n", splt[2]);
	return (0);
}*/
