/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrgabo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 16:29:04 by mrgabo            #+#    #+#             */
/*   Updated: 2022/06/01 17:14:16 by mrgabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(const char *s)
{
	char	*cpy;
	size_t	len;
	size_t	i;

	len = ft_strlen(s);
	cpy = (char *)malloc(len + 1);
	if (!cpy)
		return (NULL);
	i = 0;
	while (i <= len)
	{
		*(cpy + i) = *(s + i);
		i++;
	}
	return (cpy);
}
