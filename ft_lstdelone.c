/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoreno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 17:43:23 by gamoreno          #+#    #+#             */
/*   Updated: 2022/06/22 19:58:10 by gamoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Parametros:	-Un eslabon 'lst' de una lista enlazada tipo t_list.
 *
 * Esta funcion libera con free los mallocs hechos para el contenido de 'lst'
 * y para el espacio de 'lst' misma.
 *
 * Devuelve: n/a es de tipo void. */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
	}
}
