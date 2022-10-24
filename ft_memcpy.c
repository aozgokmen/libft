/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozgokme <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 20:27:42 by aozgokme          #+#    #+#             */
/*   Updated: 2022/01/22 14:16:22 by aozgokme         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	unsigned const char	*s;

	if (!dst && !src)
		return (0);
	d = dst;
	s = src;
	while (n-- > 0)
	{
		*(d++) = *(s++);
	}
	return (dst);
}

/*int main()
 {
    char d[10] = "ahmetcan";
    char s[5]  = "can";
    size_t n = 2;
    printf("%s",ft_memcpy(d,s,2));
}
*/
