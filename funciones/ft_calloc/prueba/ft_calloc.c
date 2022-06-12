/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrgabo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 18:44:41 by mrgabo            #+#    #+#             */
/*   Updated: 2022/06/01 16:15:20 by mrgabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		str[i] = '\0';
		i++;
        }
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	p = malloc(nmemb * size);
	if (p == NULL)
		return (p);
	ft_bzero(p, nmemb * size);
	return (p);
}

void	printvertor(int *r, int c)
{
	int	i;

	i = 0;
	while (i < c)
	{
		printf("%d, ", r[i]);
		i++;
	}
	printf("\n");
}


int main (void)
{
	int	*i;
	int	*j;

	i = (int *)ft_calloc(5, sizeof(int));
	j = (int *)calloc(5, sizeof(int));
	printf("mio:\n");
	printvertor(i, 10);
	printf("---------------------\n");
	printf("org:\n");
	printvertor(j,10);
	return (0);
}
