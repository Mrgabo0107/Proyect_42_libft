/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoreno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 20:16:21 by gamoreno          #+#    #+#             */
/*   Updated: 2022/06/17 20:16:24 by gamoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Parametros:	-Un puntero a una cadena de caracteres 's':
 * 		-Una funcion arbitraria 'f' con parametros unsigned int y una 
 * 		 cadena de caracteres que dentro de la funcion ft_striteri 
 * 		 sera la cadena *s.
 *
 * Esta funcion aplica 'f' a todos los caracteres de 's' 
 
 * Devuelve:	Al ser void no devuelve nada pero como la cadena 's' no es
 * 		constante, se somete a ser modificada pcter a caracter por 
 * 		'f' */

#include "libft.h"

void	*ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
	return (s);
}
