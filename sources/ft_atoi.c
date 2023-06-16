/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoreno <gamoreno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 17:14:11 by gamoreno          #+#    #+#             */
/*   Updated: 2023/06/16 23:40:54 by gamoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_atoi(const char *nptr)
{
	int			i;
	long int	j;
	int			k;

	i = 0;
	j = 0;
	k = 0;
	while ((9 <= nptr[i] && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '-')
	{
		k = 1;
		i++;
	}
	else if (nptr[i] == '+')
		i++;
	while ('0' <= nptr[i] && nptr[i] <= '9')
	{
		j += nptr[i] - 48;
		j *= 10;
		i++;
	}
	if (k == 1)
		j *= -1;
	return ((int)(j / 10));
}
