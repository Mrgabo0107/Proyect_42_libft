/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoreno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 17:21:39 by gamoreno          #+#    #+#             */
/*   Updated: 2022/06/21 18:14:04 by gamoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Parametros	-La direccion como puntero del primer elemento 'lst' de una lista 
 * 		 t_list.
 * 		-Un eslabon tipo t_list llamado 'new'.
 *
 * Esta funcion adjunta el eslabon 'new' tipo t_list ya creado al inicio de la 
 * lista.
 *
 * Devuelve:	n/a es tipo void. */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new)
	{	
		if (!lst)
			*lst = new;
		new->next = *lst;
		*lst = new;
	}
}
