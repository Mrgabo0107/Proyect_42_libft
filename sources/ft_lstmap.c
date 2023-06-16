/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoreno <gamoreno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 17:10:42 by gamoreno          #+#    #+#             */
/*   Updated: 2023/06/16 23:45:12 by gamoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

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
