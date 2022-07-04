/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoreno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 15:10:21 by gamoreno          #+#    #+#             */
/*   Updated: 2022/06/15 15:14:14 by gamoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Parametros	-Un caracter 'c' visto como int.
 *
 * Esta funcion toma el caracter como parametro y si es una letra minuscula la 
 * transforma en mayuscula.
 *
 * Devuelve:	El caracter 'c' como int. */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
