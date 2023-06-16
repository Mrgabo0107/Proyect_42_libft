/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoreno <gamoreno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 15:54:57 by gamoreno          #+#    #+#             */
/*   Updated: 2023/06/16 23:45:20 by gamoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

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
