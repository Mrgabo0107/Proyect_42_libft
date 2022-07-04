/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoreno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 16:21:35 by gamoreno          #+#    #+#             */
/*   Updated: 2022/06/22 16:34:36 by gamoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Parametros:	Un puntero a una lista enlazada tipo t_list.
 *
 * Esta funcion toma el puntero al inicio de una lista y busca el elemto final
 * de la misma.
 *
 * Devuelve:	Un puntero al elemento final de la lista pasada por 
 * 		parametro. */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*curr;

	if (!lst)
		return (NULL);
	curr = lst;
	while (curr->next != NULL)
		curr = curr->next;
	return (curr);
}
