/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoreno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 15:54:57 by gamoreno          #+#    #+#             */
/*   Updated: 2022/06/20 17:12:00 by gamoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Parametros:	-Un puntero void a un 'content' generico.
 *
 * La funcion crea e inicializa un eslabon para una lista enlazada definiendo
 * el puntero next a NULL
 *
 * Devuelve:	un puntero al eslabon creado */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*maillon;

	maillon = (t_list *)malloc(sizeof(*maillon));
	if (!maillon)
		return (NULL);
	maillon->content = content;
	maillon->next = NULL;
	return (maillon);
}
