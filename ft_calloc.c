/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozgokme <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 20:27:05 by aozgokme          #+#    #+#             */
/*   Updated: 2022/01/21 20:27:11 by aozgokme         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	void	*r;

	i = count * size;
	r = malloc(i);
	if (!r)
		return (NULL);
	ft_bzero(r, i);
	return (r);
}

/*
 int main()
 {
    size_t count = 5;
    size_t size = 4;
    printf("%s",ft_calloc(count,size);
 */
