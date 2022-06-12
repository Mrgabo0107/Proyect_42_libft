/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrgabo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 22:42:23 by mrgabo            #+#    #+#             */
/*   Updated: 2022/06/12 00:39:10 by mrgabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Parametro: Un caracter visto como entero.
 *
 * Esta funcion evalua si el parametro es un caracter imprimible.
 *
 * Devuelve: 1 si el caracter es imprimible y cero en caso contrario. */

int	ft_isprint(int c)
{
	if (32 <= c && c <= 126)
		return (1);
	return (0);
}
