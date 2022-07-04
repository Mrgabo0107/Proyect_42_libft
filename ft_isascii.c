/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoreno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 14:39:15 by gamoreno          #+#    #+#             */
/*   Updated: 2022/06/30 14:39:19 by gamoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Parametros:	Un caracter visto como entero.
 *
 * Esta funcion evalua si el digito pasado pr parametro correponde a un valor 
 * ascii valido.
 *
 * Devuelve:	Uno si el parametro es hace parte del codigo ascii o cero en
 * 		caso contrario. */

#include "libft.h"

int	ft_isascii(int c)
{
	if (0 <= c && c <= 127)
		return (1);
	return (0);
}
