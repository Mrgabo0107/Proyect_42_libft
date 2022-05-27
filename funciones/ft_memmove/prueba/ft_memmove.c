/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrgabo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 14:24:53 by mrgabo            #+#    #+#             */
/*   Updated: 2022/05/26 14:51:56 by mrgabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	unsigned char	*strd;
	unsigned char	*strs;

	strd = (unsigned char*)dest;
	strs = (unsigned char*)src;
	i = 0;
	if (!strd && !strd)
		return (NULL);
	if (strs < strd)
		while (++i <= n)
			strd[n - i] = strs[n - i];
	else
		while (n-- > 0)
			*(strd++) = *(strs++);
	return (dest);
}

int	main(void)
{
//	char	s1[11] = "hola mundo";
//	char	s2[11] = "hola mundo";
	char	c1[15] = "viva la musica";
	char	c2[15] = "viva la musica";

//	printf("-----original (prueba positiva 1)-----\n");
//	memmove(c1, s1, 10);
//	printf("%s\n", c1);
//	printf("----- mio (prueba positiva 1)-----\n");
//	ft_memmove(c2, s2, 10);
//	printf("%s\n", c2);
//-------------------------------------------------------//
//	printf("-----original (error 1.0)-----\n");
//	memmove(s1, c1, 11);
//	printf("%s\n", s1);                                      //revisar
//	printf("-----mio (error 1.0)-----\n");
//	ft_memmove(s2, c2, 11);
//	printf("%s\n", s2);
//-------------------------------------------------------//
//	printf("-----original (error 1.1)-----\n");
//	memmove(s1, c1, 13);
//	printf("%s\n", s1);                                      //revisar
//	printf("-----mio (error 1.1)-----\n");
//	ft_memmove(s2, c2, 13);
//	printf("%s\n", s2);
//-------------------------------------------------------//
//	printf("-----original (prueba positiva 2)-----\n");
//	memmove(c1, c1 + 8, 3);
//	printf("%s\n", c1);
//	printf("-----mio (prueba positiva 2)-----\n");
//	ft_memmove(c2, c2 + 8, 3);
//	printf("%s\n", c2);
//-------------------------------------------------------//
	printf("-----original (error 2.0)-----\n");
	memmove(c1, c1 + 3, 11);
	printf("%s\n", c1);
	printf("-----mio (error 2.0)-----\n");
	ft_memmove(c2, c2 + 3, 11);
	printf("%s\n", c2);
//-------------------------------------------------------//
	printf("-----original (error 2.1)-----\n");
	memmove(c1, c1 + 3, 12);
	printf("%s\n", c1);
	printf("-----mio (error 2.1)-----\n");
	ft_memmove(c2, c2 + 3, 12);
	printf("%s\n", c2);
//-------------------------------------------------------//
//	printf("-----original (error 2.2)-----\n");
//	memmove(c1, c1 + 3, 15);
//	printf("%s\n", c1);
//	printf("-----mio (error 2.2)-----\n");
//	ft_memmove(c2, c2 + 3, 15);
//	printf("%s\n", c2);
//-------------------------------------------------------//
//	printf("-----mio (error 2.4)-----\n");
//	ft_memmove(c2, c2 + 2, 4);
//	printf("%s\n", c2);
//	printf("-----original (error 2.4)-----\n");
//	memmove(c1, c1 + 2 , 4);
//	printf("%s\n", c1);
//	return (0);
}
