/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrgabo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 22:00:52 by mrgabo            #+#    #+#             */
/*   Updated: 2022/06/12 00:03:18 by mrgabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Parametros: Caracter visto como entero.

   Esta funcion evalua si el caracter pasado por paametro como entero es alpha 
   no numerico.

   Devuelve: 1 si el caracter hace parte del abecedario, 0 en caso contrario */

int	ft_isalpha(int c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
		return (1);
	return (0);
}
