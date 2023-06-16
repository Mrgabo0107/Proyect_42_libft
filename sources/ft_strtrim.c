/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoreno <gamoreno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 13:42:46 by gamoreno          #+#    #+#             */
/*   Updated: 2023/06/16 23:47:37 by gamoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	isinset(char const *charset, int c)
{
	size_t	i;

	i = 0;
	while (charset[i])
	{
		if ((int)charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p1;
	char	*p2;
	size_t	i;

	i = 0;
	p1 = (char *)s1;
	p2 = (char *)s1 + ft_strlen(s1);
	while (isinset(set, s1[i]) == 1)
	{
		p1++;
		i++;
	}
	i = ft_strlen(s1) - 1;
	while (isinset(set, s1[i]) == 1)
	{
		p2--;
		i--;
	}
	return (ft_substr(s1, p1 - s1, p2 - p1));
}
