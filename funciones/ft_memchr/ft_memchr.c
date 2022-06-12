/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrgabo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 12:56:54 by mrgabo            #+#    #+#             */
/*   Updated: 2022/05/27 13:53:11 by mrgabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	k;
	size_t			i;

	i = 0;
	str = (unsigned char *)s;
	k = (unsigned char)c;
	while (i < n)
	{
		if (str[i] == k)
			return ((void *)(str + i));
		i++;
	}
	return (NULL);
}
