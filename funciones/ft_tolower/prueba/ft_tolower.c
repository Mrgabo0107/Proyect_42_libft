/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrgabo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 18:26:21 by mrgabo            #+#    #+#             */
/*   Updated: 2022/05/26 19:03:37 by mrgabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <string.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

int main (void)
{
	char str[70] = "vivAn #$%&/ los ca$racoLES";
	char cstr[70] = "";
	int	i;

	i = 0;
	memcpy(cstr, str, 60);
	while (str[i])
	{
		str[i] = ft_tolower(str[i]);
		i++;
	}
	printf("original: %s\n",str);
	memcpy(str, cstr, 60);
	i = 0;
	while (str[i])
	{
		str[i] = ft_tolower(str[i]);
		i++;
	}
	printf("mio: %s\n",str);
	return (0);
}
