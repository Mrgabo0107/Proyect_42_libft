/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrgabo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 21:48:52 by mrgabo            #+#    #+#             */
/*   Updated: 2022/05/26 22:35:15 by mrgabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
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

	a = 0;
	while (a < 127)
	{
		c1 = strchr(str, a);
		c2 = ft_strchr(str, a);
		printf("con a -> %d = %c \n", a, a);
		printf("original -> %s\n", c1);
		printf("mia -> %s\n", c2);
		a++;
	}
	return (0);
}
