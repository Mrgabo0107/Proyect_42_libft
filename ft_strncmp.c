/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoreno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 15:48:29 by gamoreno          #+#    #+#             */
/*   Updated: 2022/06/28 14:39:17 by gamoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Parametros:	-Dos cadenas de caracteres punteadas respectivamente por 's1' y 
 * 		's2'.
 * 		-Un size_t 'n'.
 *
 * Esta funcion compara caracter a caracter las cadenas 's1' y 's2'.
 *
 * Devuelve: la resta del valor ascii correspondiente al primer caracter en el
 * que difieran 's1' y 's2', o cero si las cadenas son iguales. */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
