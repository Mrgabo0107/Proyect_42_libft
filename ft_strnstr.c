/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoreno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 16:58:46 by gamoreno          #+#    #+#             */
/*   Updated: 2022/06/15 17:13:12 by gamoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Parametros:	-Una cadena de caracteres 'big'.
 * 		-Una cadena de caracteres 'little'.
 * 		-Un size_t len.
 *
 * Esta funcion localiza la primer ocurrencia de la subcadena 'little' terminada 
 * en '\0' en la cadena 'big' donde no mas de 'len' caracteres son buscados.
 * los caracteres posteriores a un '\0' no seran buscados.
 *
 * Devuelve: 	Un puntero al inicio de la ocurrencia de 'little' dentro de 
 *		 'big'. */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*little == '\0' || little == NULL)
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		while (little[j] == big[i + j] && i + j < len)
		{
			if (little[j + 1] == '\0')
				return ((char *)big + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
