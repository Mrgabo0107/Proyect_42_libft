/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrgabo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 12:56:54 by mrgabo            #+#    #+#             */
/*   Updated: 2022/05/27 13:51:30 by mrgabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
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

int	main(void)
{
	void	*p1;
	void	*p2;
	char	s[40] = "dacd&cndjascndfry8e$%&/";
	int	i;

	i = 0;
	while (i < 20)
	{
		p1 = memchr(s, 'f', i);
		p2 = ft_memchr(s, 'f', i);
		printf("mio -> %s, org -> %s \n", (char *)p2, (char *)p1);
		i++;
	}
	return (0);
}
