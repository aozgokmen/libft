/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozgokme <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 20:28:06 by aozgokme          #+#    #+#             */
/*   Updated: 2022/01/22 14:22:26 by aozgokme         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	unsigned const char	*s;

	d = dst;
	s = src;
	if (d > s)
	{
		while (len-- > 0)
			*(d + len) = *(s + len);
	}
	else
	{
		if (!(dst) && !(src))
			return (0);
		while (len-- > 0)
			*(d++) = *(s++);
	}
	return (dst);
}
/*int main()
 {
    char dest[] = "merhaba";
    char src[] = "mer";
    size_t len = 3;
    printf("%s", ft_memmove(dest, src, len);
 }
*/
