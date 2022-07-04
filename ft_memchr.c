/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoreno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 15:56:48 by gamoreno          #+#    #+#             */
/*   Updated: 2022/06/15 16:49:12 by gamoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Parametros:	-Un puntero a una cadena de caracteres 's' visto como puntero 
 * 		 void.
 * 		-Un caracter 'c' visto como int.
 * 		-Un size_t 'n'.
 *
 * Esta funcion busca dentro de la cadena 's' la primera ocurrencia del caracter
 * 'c' de izquierda a derecha.
 *
 * Devuelve:	Un puntero a la posicion de esa ocurrencia o NULL en caso de no
 * 		enconrarse el caracter. */

#include "libft.h"

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
