/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrgabo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 21:48:52 by mrgabo            #+#    #+#             */
/*   Updated: 2022/05/27 11:56:50 by mrgabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if (s == NULL)
		return (NULL);
	while (i > 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (NULL);
}

int	main(void)
{
	char	str[100] = "car7pe/ $di#4em 1U(00%";
	char	*c1;
	char	*c2;
	char	a;

	a = 55;
	while (a < 56)
	{
		c1 = strrchr(str, a);
		c2 = ft_strrchr(str, a);
		printf("con a -> %d = %c \n", a, a);
		printf("original -> %s\n", c1);
		printf("mia -> %s\n", c2);
		a++;
	}
	return (0);
}
