/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoreno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 14:54:17 by gamoreno          #+#    #+#             */
/*   Updated: 2022/06/28 16:39:23 by gamoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Parametros:	-Un puntero a una cadena destino 'dst'.
 * 		-Un puntero a una cadena fuente 'src'.
 * 		-un size_t 'size'.
 *
 * Esta funcion concatena la cadena 'src' con la cadena 'des' escribiendo la 
 * fuente despues del destino y agreando el aracter nulo '\0' al final.
 *
 * Devuelve: la longitud de la cadena que se intento o se logro crear. */

#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	z;

	i = 0;
	j = ft_strlen(dst);
	k = ft_strlen(dst);
	z = ft_strlen(src);
	if (size <= 0 || size <= k)
		return (z + size);
	while (src[i] != '\0' && i < size - k - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (k + z);
}
