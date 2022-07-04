/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoreno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 16:50:12 by gamoreno          #+#    #+#             */
/*   Updated: 2022/06/15 16:57:09 by gamoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Parametros:	-Dos cadenas de caracteres 's1' y 's2'.
 * 		-un size_t 'n'.
 * Esta funcion compara de izquierda a derecha las cadenas 's1' y 's2' elemento  
 * a elemento.
 *
 * Devuelve: 	La diferencia entre el valor ascii de los caracteres que
 * 		difieren o cero si las cadenas son iguales. */

#include "libft.h" 

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

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
