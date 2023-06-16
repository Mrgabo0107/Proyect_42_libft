/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoreno <gamoreno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 14:35:08 by gamoreno          #+#    #+#             */
/*   Updated: 2023/06/16 23:45:51 by gamoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*strd;
	unsigned char	*strs;

	strd = (unsigned char *)dest;
	strs = (unsigned char *)src;
	i = 0;
	if (!strd && !strd)
		return (NULL);
	if (strs < strd)
		while (++i <= n)
			strd[n - i] = strs[n - i];
	else
		while (n-- > 0)
			*(strd++) = *(strs++);
	return (dest);
}
