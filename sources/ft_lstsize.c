/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoreno <gamoreno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 15:59:14 by gamoreno          #+#    #+#             */
/*   Updated: 2023/06/16 23:45:27 by gamoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_lstsize(t_list *lst)
{
	int		compt;
	t_list	*curr;

	compt = 0;
	curr = lst;
	while (curr != NULL)
	{
		compt++;
		curr = curr->next;
	}
	return (compt);
}
