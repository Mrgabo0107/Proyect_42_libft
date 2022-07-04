/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoreno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 13:42:46 by gamoreno          #+#    #+#             */
/*   Updated: 2022/06/24 17:47:00 by gamoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Parametros:	-Un puntero 's1' a una cadena de caracteres.
 * 		-Un puntero 'set' a una cadena de caracteres.
 *
 * Esta funcion extrae la subcadena de 's1' la cual se obtiene eliminando los 
 * caracteres de set que se encuentren al inicio y al final de 's1'.
 *
 * Devuelve:	La subcadena creada. */

#include "libft.h"

static int	isinset(char const *charset, int c)
{
	size_t	i;

	i = 0;
	while (charset[i])
	{
		if ((int)charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p1;
	char	*p2;
	size_t	i;

	i = 0;
	p1 = (char *)s1;
	p2 = (char *)s1 + ft_strlen(s1);
	while (isinset(set, s1[i]) == 1)
	{
		p1++;
		i++;
	}
	i = ft_strlen(s1) - 1;
	while (isinset(set, s1[i]) == 1)
	{
		p2--;
		i--;
	}
	return (ft_substr(s1, p1 - s1, p2 - p1));
}
