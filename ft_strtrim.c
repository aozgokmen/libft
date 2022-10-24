/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozgokme <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 20:39:09 by aozgokme          #+#    #+#             */
/*   Updated: 2022/01/21 20:42:39 by aozgokme         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_char(char c, const char *set)
{
	while (*set != '\0')
		if (c == *set++)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s, char const *set)
{
	char	*r;
	size_t	ep;

	if (s == NULL || set == NULL)
		return (NULL);
	while (is_char(*s, set) && *s != '\0')
		s++;
	ep = ft_strlen(s);
	while (is_char(s[ep - 1], set) && ep != 0)
		ep--;
	r = (char *)malloc(sizeof(char) * (ep + 1));
	if (r == NULL)
		return (NULL);
	ft_strlcpy(r, s, ep + 1);
	return (r);
}
/*int main()
{
  char s[] = "***ahmetcan***";
  char set[] = "*";
  printf("%s", ft_strtrim(s, set));
}*/
