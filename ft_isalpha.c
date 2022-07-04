/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoreno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 14:38:37 by gamoreno          #+#    #+#             */
/*   Updated: 2022/06/30 14:38:41 by gamoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Parametros: Caracter visto como entero.

   Esta funcion evalua si el caracter pasado por paametro como entero es alpha 
   no numerico.

   Devuelve: 1 si el caracter hace parte del abecedario, 0 en caso contrario */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
		return (1);
	return (0);
}
