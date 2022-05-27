/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrgabo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 21:52:33 by mrgabo            #+#    #+#             */
/*   Updated: 2022/05/25 17:21:15 by mrgabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	unsigned char	*strd;
	unsigned char	*strs;

	i = 0;
	strd = (unsigned char *)dest;
	strs = (unsigned char *)src;
	while (i < n)
	{
		strd[i] = strs[i];
		i++;
	}
	return (dest);
}
int	main(void)
{
//	char	s1[11] = "hola mundo";
//	char	s2[11] = "hola mundo";
	char	c1[15] = "viva la musica";
	char	c2[15] = "viva la musica";

//	printf("-----original (prueba positiva 1)-----\n");
//	memcpy(c1, s1, 10);
//	printf("%s\n", c1);
//	printf("----- mio (prueba positiva 1)-----\n");
//	ft_memcpy(c2, s2, 10);
//	printf("%s\n", c2);
//-------------------------------------------------------//
//	printf("-----original (error 1.0)-----\n");
//	memcpy(s1, c1, 11);
//	printf("%s\n", s1);                                      //revisar
//	printf("-----mio (error 1.0)-----\n");
//	ft_memcpy(s2, c2, 11);
//	printf("%s\n", s2);
//-------------------------------------------------------//
//	printf("-----original (error 1.1)-----\n");
//	memcpy(s1, c1, 13);
//	printf("%s\n", s1);                                      //revisar
//	printf("-----mio (error 1.1)-----\n");
//	ft_memcpy(s2, c2, 13);
//	printf("%s\n", s2);
//-------------------------------------------------------//
//	printf("-----original (prueba positiva 2)-----\n");
//	memcpy(c1, c1 + 8, 3);
//	printf("%s\n", c1);
//	printf("-----mio (prueba positiva 2)-----\n");
//	ft_memcpy(c2, c2 + 8, 3);
//	printf("%s\n", c2);
//-------------------------------------------------------//
//	printf("-----original (error 2.0)-----\n");
//	memcpy(c1, c1 + 3, 11);
//	printf("%s\n", c1);
//	printf("-----mio (error 2.0)-----\n");
//	ft_memcpy(c2, c2 + 3, 11);
//	printf("%s\n", c2);
//-------------------------------------------------------//
//	printf("-----original (error 2.1)-----\n");
//	memcpy(c1, c1 + 3, 12);
//	printf("%s\n", c1);
//	printf("-----mio (error 2.1)-----\n");
//	ft_memcpy(c2, c2 + 3, 12);
//	printf("%s\n", c2);
//-------------------------------------------------------//
//	printf("-----original (error 2.2)-----\n");
//	memcpy(c1, c1 + 3, 15);
//	printf("%s\n", c1);
//	printf("-----mio (error 2.2)-----\n");
//	ft_memcpy(c2, c2 + 3, 15);
//	printf("%s\n", c2);
//-------------------------------------------------------//
	printf("-----mio (error 2.4)-----\n");
	ft_memcpy(c2, c2 + 2, 4);
	printf("%s\n", c2);
	printf("-----original (error 2.4)-----\n");
	memcpy(c1, c1 + 2 , 4);
	printf("%s\n", c1);
	return (0);
}
