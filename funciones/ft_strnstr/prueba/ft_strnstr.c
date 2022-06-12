/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrgabo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 16:33:39 by mrgabo            #+#    #+#             */
/*   Updated: 2022/05/30 18:59:27 by mrgabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*little == '\0' || little == NULL)
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		while (little[j] == big[i + j] && i + j < len)
		{
			if (little[j + 1] == '\0')
				return ((char *)big + i);
			j++;
		}
		i++;
	}
	return (NULL);
}

int	main(void)
{
	char	grn[] = "cbxzksjn.cDJCASO1KDH#$%&/(CASO2ZDSBCZSDMCASO3CB$%<JKSCBS";
	char	peq[] = "CASO3";
	size_t		i;

	i = 0;
	while (i < strlen(grn))
	{
		printf("i = %ld || mio = %s, org = %s \n", i, ft_strnstr(grn, peq, i), strnstr(grn, peq, i));
		i++;
	}
	return (0);
}
