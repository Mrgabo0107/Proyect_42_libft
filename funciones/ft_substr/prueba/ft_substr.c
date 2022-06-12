/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrgabo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 17:20:47 by mrgabo            #+#    #+#             */
/*   Updated: 2022/06/01 22:26:44 by mrgabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t  i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*substr;

	if (!s)
		return (NULL);
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	i = 0;
	while (i < len && s[start + i] != '\0')
	{
		substr[i] = s[start + i];
		printf("%s\n", substr);
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

int main(void)
{
	char	str[] = "hola mundos";
	
	printf(" substring = %s\n", ft_substr(str, 3, 16));
	return (0);
}

/*
int main (int argc, char **argv)
{
	char	*substr;
	unsigned int	s;
	size_t	i;
	
	(void)argc;
	s = (unsigned int)*argv[2] - 48;
	i = (size_t)*argv[3] - 48;
	substr = ft_substr(argv[1], s, i);
	printf("substr = %s\n", substr);
	return (0);
}
*/
