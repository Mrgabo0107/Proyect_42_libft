/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrgabo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 12:35:36 by mrgabo            #+#    #+#             */
/*   Updated: 2022/05/27 12:52:58 by mrgabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int	main(void)
{
	char	str1[20] = "HolamuNdo";
	char	str2[20] = "Holamundo";
	int	i;

	i = 0;
	while (i < 20)
	{
		printf("mio = %d, org = %d \n", strncmp(str1, str2, i),strncmp(str1, str2, i));
		i++;
	}
	return (0);
}
