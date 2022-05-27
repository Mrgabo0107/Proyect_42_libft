/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrgabo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 14:24:53 by mrgabo            #+#    #+#             */
/*   Updated: 2022/05/26 14:55:47 by mrgabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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
