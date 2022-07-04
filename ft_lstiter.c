/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoreno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 21:50:03 by gamoreno          #+#    #+#             */
/*   Updated: 2022/06/22 22:48:05 by gamoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Parametros:	-Un puntero a un elemento 'lst' de tipo t_list.
 *		-Una funcion 'f' tipo void con un puntero void como parametro.
 * 
 * Esta funcion implementa la funcion f en el contenido tanto de 'lst' como
 * en los elementos siguientes dentro de la lista enlazada.
 *
 * Devuelve:	n/a es de tipo void. */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
