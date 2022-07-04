/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoreno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 15:59:14 by gamoreno          #+#    #+#             */
/*   Updated: 2022/06/22 16:17:16 by gamoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Parametros:	-Un puntero 'lst' a una lista enlazada tipo t_list;
 *
 * Esta funcion cuenta la cantidad de elementos que existen en una lista 
 * enlazada.
 *
 * Devuelve:	El numero de elementos bajo una variable tipo int. */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		compt;
	t_list	*curr;

	compt = 0;
	curr = lst;
	while (curr != NULL)
	{
		compt++;
		curr = curr->next;
	}
	return (compt);
}
