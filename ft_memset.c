/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozgokme <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 20:26:01 by aozgokme          #+#    #+#             */
/*   Updated: 2022/01/21 20:26:03 by aozgokme         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;

	str = (unsigned char *)b;
	while (len-- > 0)
	{
		*(str++) = (unsigned char)c;
	}
	return (b);
}
/*int main()
{
  char s[] = "ahmetcan";
  int c = '*';
  size_t len = 7;
  printf("%s",ft_memset(s,c,len));
}
*/
