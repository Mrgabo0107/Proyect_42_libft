/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoreno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 17:10:42 by gamoreno          #+#    #+#             */
/*   Updated: 2022/06/23 21:33:55 by gamoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Parametros:	-Un ppuntero  un elemento 'lst' tipo t_list.
 * 		-Una funcion 'f' pasada como parametro que devuelve un puntero 
 * 		 tipo void.
 * 		-Una funcion 'del' que hace free del contenido y despues del
 * 		 esalbon pasado por parametro ayudado or la funcion free.
 *
 * Esta funcion crea una copia de la lista enlazada 'lst' donde los elementos 
 * pertenecientes a la lista han sido modificados por la funcion 'f'.
 *
 * Devuelve:	Un puntero al elementto inicial de la nueva lista. */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*begin;
	t_list	*node;
	t_list	*listcpy;

	if (!lst || !f || !del)
		return (NULL);
	listcpy = lst;
	begin = NULL;
	while (listcpy)
	{
		node = ft_lstnew(f(listcpy->content));
		if (!node)
		{
			ft_lstclear(&begin, del);
			return (NULL);
		}
		ft_lstadd_back(&begin, node);
		listcpy = listcpy->next;
	}
	return (begin);
}
