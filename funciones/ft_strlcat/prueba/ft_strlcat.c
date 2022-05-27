/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoreno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 13:17:55 by gamoreno          #+#    #+#             */
/*   Updated: 2022/05/26 17:39:19 by mrgabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	z;

	i = 0;
	j = 0;
	while (dst[j] != '\0')
		j++;
	k = j;
	z = ft_strlen(src);
	if (size == 0 || size <= k)
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

int	main(void)
{
	char	str1[11] = "como estas";
	char	str2[21] = "hola mundo";
	char	str3[21] = "hola mundo";
	char	cstr2[21] = "";
	char	cstr3[21] = "";
	int	i;

	i = 0;
	while (i <= 25)
	{
		strlcpy(cstr2, str2, 21);
		strlcpy(cstr3, str3, 21);
		strlcat(cstr2, str1, i);
		ft_strlcat(cstr3, str1, i);
		printf("con i = %d, mio = %s (return = %ld)|| original = %s (return %ld)\n",i,cstr3, ft_strlcat(cstr3, str1, i), cstr2, strlcat(cstr2, str1, i));
		i++;
	}
	return (0);
}
