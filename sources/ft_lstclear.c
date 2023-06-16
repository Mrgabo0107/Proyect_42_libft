/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoreno <gamoreno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 20:01:24 by gamoreno          #+#    #+#             */
/*   Updated: 2023/06/16 23:43:48 by gamoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

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
