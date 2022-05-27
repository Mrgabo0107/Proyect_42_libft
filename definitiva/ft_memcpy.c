/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrgabo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 21:52:33 by mrgabo            #+#    #+#             */
/*   Updated: 2022/05/25 13:43:46 by mrgabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*strd;
	char	*strs;

	i = 0;
	strd = (char *)dest;
	strs = (char *)src;
	while (i < n)
	{
		strd[i] = strs[i];
		i++;
	}
	return (dest);
}
