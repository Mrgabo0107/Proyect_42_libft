/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrgabo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 22:32:07 by mrgabo            #+#    #+#             */
/*   Updated: 2022/06/01 23:10:23 by mrgabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

size_t  ft_strlen(const char *s)
{
        size_t  i;

        i = 0;
        while (s[i])
                i++;
        return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	size_t	i;
	char	*str;

	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = (char *)malloc(sizeof(char) * len);
	if (!str)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[i - ft_strlen(s1)])
	{
		str[i] = s2[i - ft_strlen(s1)];
		i++;
	}
	str[i] = '\0';
	return (str);
}

int	main (int argc, char **argv)
{
	char	*str1;
	char	*str2;
	char	*conc;

	(void)argc;
	str1 = &argv[1][0];
	str2 = &argv[2][0];
	conc = ft_strjoin(str1, str2);
	printf("%s\n", conc);
	return (0);
}
