/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrgabo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 15:38:38 by mrgabo            #+#    #+#             */
/*   Updated: 2022/05/26 16:11:55 by mrgabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include <stdlib.h>
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
	{
		if (size > 0 && (i < size -1))
		{
			dst[i] = src[i];
			j++;
		}
		i++;
	}
	dst[j] = '\0';
	return (i);
}

int	main(void)
{
	char	str1[11] = "hola mundo";
	char	str2[7] = "";
	char	str3[7] = "";
	int	i;

	i = 0;
	while (i < 20)
	{
		ft_strlcpy(str2, str1, i);
		printf("mia con i = %d, s = %s \n", i, str2);
		strlcpy(str3, str1, i);
		printf("org con i = %d, s = %s \n", i, str3);
		i++;
	}
	return (0);
}
