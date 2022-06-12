/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrgabo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 22:42:23 by mrgabo            #+#    #+#             */
/*   Updated: 2022/06/12 00:32:34 by mrgabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Parametros: Un caracter visto como entero.
 *
 * Esta funcion evalua si el digito pasado pr parametro correponde a un valor 
 * ascii valido.
 *
 * Devuelve: Uno si el parametro es hace parte del codigo ascii o cero en caso
 * contrario. */

int	ft_isascii(int c)
{
	if (0 <= c && c <= 127)
		return (1);
	return (0);
}
