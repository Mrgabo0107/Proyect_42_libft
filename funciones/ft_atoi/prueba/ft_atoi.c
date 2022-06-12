/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrgabo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 19:10:41 by mrgabo            #+#    #+#             */
/*   Updated: 2022/05/30 22:10:32 by mrgabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(const char *nptr)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while ((9 <= nptr[i] && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '-')
	{
		k = 1;
		i++;
	}
	else if (nptr[i] == '+')
		i++;
	while ('0' <= nptr[i] && nptr[i] <= '9')
	{
		j += nptr[i] - 48;
		j *= 10;
		i++;
	}
	if (k == 1)
		j *= -1;
	return (j / 10);
}
 
int	main (void)
{
	char	str[] = " \n \v \f\r  12dasd44wefasddaff";
	
	printf("mio = %d, org = %d \n", ft_atoi(str), atoi(str));
	return (0);
}
