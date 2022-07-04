/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoreno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 14:37:42 by gamoreno          #+#    #+#             */
/*   Updated: 2022/06/30 14:37:46 by gamoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Parametros:	Un caracter visto como entero
 *
 * Esta funcion evalua si el caracter es alpha - numerico.
 *
 * Devuelve:	1 si el caracter hace aprte del abecedario o es un digito, o 0
 * 		en caso contrario */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) == 1 || ft_isdigit(c) == 1)
		return (1);
	return (0);
}
