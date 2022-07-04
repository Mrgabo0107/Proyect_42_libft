/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoreno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 14:44:56 by gamoreno          #+#    #+#             */
/*   Updated: 2022/06/24 19:22:58 by gamoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Parametros:	-Un puntero a una cadena de caracteres destino 'dst'.
 * 		-Un puntero a una cadena fuente 'src'.
 * 		-Un size_t 'size'.
 *
 * Esta funcion copia 'size - 1' caracteres de la cadena 'src' a la cadena 'dest'
 * colocando el caracter '\0' en el byte numero 'size'
 *
 * Devuelve: 	Un size_t que representa el largo de 'src' (la cadena que se 
 *		intenta copiar). */

#include "libft.h" 

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] != '\0')
	{
		if (size > 0 && (i < size -1))
		{
			dst[i] = src[i];
			j++;
		}
		i++;
	}
	dst[j] = '\0';
	return (ft_strlen(src));
}
