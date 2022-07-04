/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoreno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 20:01:24 by gamoreno          #+#    #+#             */
/*   Updated: 2022/06/22 21:42:54 by gamoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Parametros	-La direccion de un elemento 'lst' de tipo t_list.
 * 		-Una funcion 'del' que borra el contenido de la lista.
 *
 * Esta funcion toma el elemento punteado por la direccion 'lst' y hace free
 * tanto del contenido y estructura de este y sus siguientes eslabones seteando 
 * el puntero punteado por 'lst' a NULL.
 *
 * Devuelve	n/a es de tipo void. */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*curr;

	if (!(*lst) || !del)
		return ;
	curr = *lst;
	while (curr)
	{
		temp = (curr)->next;
		ft_lstdelone(curr, del);
		curr = temp;
	}
	*lst = NULL;
}
