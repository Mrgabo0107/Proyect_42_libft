/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoreno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 14:35:08 by gamoreno          #+#    #+#             */
/*   Updated: 2022/06/15 14:42:29 by gamoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Parametros:	-Un puntero a una cadena destino 'dest'.
 * 		-Un puntero a una cadena fuente 'src'.
 * 		-Un size_t 'n'.
 *
 * Esta funcion copia 'n' caracteres de la cadena 'src' a la cadena 'dest'. Las \
 * cadenas pueden estar sobrepuestas.
 *
 * Devuelve: El punteor a la cadena 'dest'. */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*strd;
	unsigned char	*strs;

	strd = (unsigned char *)dest;
	strs = (unsigned char *)src;
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
