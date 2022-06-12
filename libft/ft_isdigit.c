/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrgabo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 22:42:23 by mrgabo            #+#    #+#             */
/*   Updated: 2022/06/12 00:11:09 by mrgabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Parametros: caracter visto como entero.
 *
 * Esta funcion evalua si el caracter pasado como parametro es un digito
 *
 * Devuelve: 1 si es digito o 0 en el caso contario. */

int	ft_isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (1);
	return (0);
}
