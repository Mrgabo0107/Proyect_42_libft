/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrgabo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 16:29:04 by mrgabo            #+#    #+#             */
/*   Updated: 2022/06/01 16:50:04 by mrgabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t  i;

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
	cpy = (char *)malloc(len);
	if (!cpy)
		return (NULL);
	i = 0;
	while (i < len)
	{
		*(cpy + i) = *(s + i);
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

int	main(void)
{
	char	str[] = "HOla mundo!!";
	char	*copia1;
	char	*copia2;

	copia1 = strdup(str);
	copia2 = ft_strdup(str);
	printf("mio: %s, org: %s\n", copia2, copia1);
	return (0);
}
