/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoreno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 14:11:11 by gamoreno          #+#    #+#             */
/*   Updated: 2022/06/15 14:15:39 by gamoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Parametros:	- Un puntero a una cadena de caracters visto como void
 * 		- Un caracter visto como int
 * 		- El numero de veces que sera escrito el caracter
 *
 * Esta funcion toma el caracter 'c' y lo escribe 'n' veces a partir del puntero
 * 's'.
 *
 * Devuelve: el puntero a la cadena decaracteres 's' */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
