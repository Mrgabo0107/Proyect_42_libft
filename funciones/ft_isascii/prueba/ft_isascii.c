/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrgabo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 22:42:23 by mrgabo            #+#    #+#             */
/*   Updated: 2022/05/22 23:24:36 by mrgabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <ctype.h>

int	ft_isascii(int c)
{
	if (0 <= c && c <= 127)
		return (1);
	return (0);
}

int	main(void)
{
	int	i;

	i = -200;
	while(i < 200)
	{
		printf("mio %d, original  %d, i %d\n", ft_isascii(i), isascii(i), i);
		i++;
	}
}
