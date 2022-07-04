/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoreno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 14:39:56 by gamoreno          #+#    #+#             */
/*   Updated: 2022/06/30 14:39:57 by gamoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Parametro: Un caracter visto como entero.
 *
 * Esta funcion evalua si el parametro es un caracter imprimible.
 *
 * Devuelve: 1 si el caracter es imprimible y cero en caso contrario. */

#include "libft.h"

int	ft_isprint(int c)
{
	if (32 <= c && c <= 126)
		return (1);
	return (0);
}
