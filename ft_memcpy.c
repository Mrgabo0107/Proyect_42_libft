/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoreno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 14:25:32 by gamoreno          #+#    #+#             */
/*   Updated: 2022/06/15 14:31:43 by gamoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Parametros:	- Un puntero a una cadena destino 'dest'.
 * 		- Un puntero a una cadena fuente 'src'.
 * 		- Un size_t 'n'.
 *
 * Esta funcion copia 'n' caracteres de la cadena 'src' en a partir del puntero
 * '*dest'
 *
 * Devuelve: El puntero a la cadena 'dest'. */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
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
