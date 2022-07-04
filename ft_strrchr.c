/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoreno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 15:37:36 by gamoreno          #+#    #+#             */
/*   Updated: 2022/06/15 15:45:40 by gamoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Parametros:	-Un puntero 's' a una cadena de caracteres.
 * 		-Un caracter 'c' visto como int.
 *
 * Esta funcion busca la primera ocurrencia de un aracter de derecha a izquierda
 *
 * Devuelve: 	Un puntero a esa ocurrencia. */

#include "libft.h" 

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if (s == NULL)
		return (NULL);
	while (i > 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (NULL);
}
