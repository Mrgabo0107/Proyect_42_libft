/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoreno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 15:16:36 by gamoreno          #+#    #+#             */
/*   Updated: 2022/06/15 15:18:47 by gamoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Parametros:	-Un caracter 'c' visto como int.
 *
 * Esta funcion toma el caracter 'c' si es una letra mayuscula y la transforma
 * en minuscula.
 *
 * Devuelve:	el caracter 'c'. */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
