/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrgabo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 13:34:41 by mrgabo            #+#    #+#             */
/*   Updated: 2022/06/12 11:05:25 by mrgabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Parametros: Puntero a una cadena de caracteres
 *
 * Esta funcion cuenta el numero de caracteres de un string desde el puntero al
 * primer caracter hasta el caracter '\0'.
 *
 * Devuelve: un size_t con el numero de caracteres */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
