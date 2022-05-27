/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrgabo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 14:36:59 by mrgabo            #+#    #+#             */
/*   Updated: 2022/05/24 18:19:56 by mrgabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

int	main(void)
{
	char	s1[11] = "hola mundo";
	char	s2[11] = "hola mundo";
	int	c;
	size_t	n;

	c = '*';
	n = 11;
	ft_memset(s1,c,n);
	printf("mio -> %s\n", s1);
	memset(s2,c,n);
	printf("original -> %s\n", s2);
	return (0);
}
