/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozgokme <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 20:26:30 by aozgokme          #+#    #+#             */
/*   Updated: 2022/01/21 20:26:31 by aozgokme         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;

	str = s;
	while (n-- > 0)
	{
		*(str++) = 0;
	}
}
/*int main()
{
  char s[] = "ahmetcan";
  size_t n = 5;
  printf("%s",ft_bzero(s,n));
  
}
*/
