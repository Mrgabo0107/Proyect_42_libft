/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrgabo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 22:42:23 by mrgabo            #+#    #+#             */
/*   Updated: 2022/06/12 00:22:27 by mrgabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Parametros: Un caracter visto como entero
 *
 * Esta funcion evalua si el caracter es alpha - numerico.
 *
 * Devuelve: 1 si el caracter hace aprte del abecedario o es un digito, o 0 en 
 * caso contrario */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) == 1 || ft_isdigit(c) == 1)
		return (1);
	return (0);
}
