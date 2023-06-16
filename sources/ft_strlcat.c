/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoreno <gamoreno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 14:54:17 by gamoreno          #+#    #+#             */
/*   Updated: 2023/06/16 23:46:54 by gamoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	z;

	i = 0;
	j = ft_strlen(dst);
	k = ft_strlen(dst);
	z = ft_strlen(src);
	if (size <= 0 || size <= k)
		return (z + size);
	while (src[i] != '\0' && i < size - k - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (k + z);
}
