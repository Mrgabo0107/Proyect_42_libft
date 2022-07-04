/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoreno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 16:40:27 by gamoreno          #+#    #+#             */
/*   Updated: 2022/06/22 17:27:16 by gamoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Parametros	-La direccion de un puntero al primer miembro 'lst' de una lista 
 * 		 tipo t_list.
 *		-Un puntero a un eslabon 'new' de una lista enlazada.
 *
 * Esta funcion adjunta el eslabon 'new' al final de la lista enlazada cuyo
 * elemento inicial esta punteado por 'lst'.
 *
 * Devuelve	n/a la funcion  es tpo void. */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*curr;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	curr = *lst;
	while (curr->next != NULL)
		curr = curr->next;
	curr->next = new;
}
