/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrgabo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 13:55:37 by mrgabo            #+#    #+#             */
/*   Updated: 2022/05/30 16:25:20 by mrgabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t		i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

int	main(void)
{
	char	st1[] = "Hola Mundo";
	char	st2[] = "Hola Inmundo";
	
	printf("mio = %d, org = %d\n", ft_memcmp(st1, st2 , 5), memcmp(st1, st2, 5));
	printf("----------------------------------------\n");
	printf("mio = %d, org = %d\n", ft_memcmp(st1, st2 , 6), memcmp(st1, st2, 6));
	printf("----------------------------------------\n");
	printf("mio = %d, org = %d\n", ft_memcmp(st1, st2 , 0), memcmp(st1, st2, 0));
	return (0);
}
