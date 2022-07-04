/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoreno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 22:46:35 by gamoreno          #+#    #+#             */
/*   Updated: 2022/06/16 23:43:59 by gamoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Parametros:	-Una cadena de caracteres punteada por 's'.
 * 		-Una funcion 'f' pasada por parametro cuyos parametros deben
 * 		 ser un entero positivo (indice), y un caracter.
 *
 * Esta funcion modifica la cadena de caracteres 's' a traves de la funcion 
 * 'f' la cual esta pensada para ser implementada con los indices y de la 
 * cadena y modifica caracter por caracter.
 *
 * Devuelve:	Una cadena de caracteres equivalente a la cadena 's' cuyos
 *		caracteres han sido modificados por la funcion 'f'. */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s)
		return (NULL);
	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (str == NULL)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
