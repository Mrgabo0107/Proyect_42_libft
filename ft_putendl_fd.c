/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoreno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 22:00:41 by gamoreno          #+#    #+#             */
/*   Updated: 2022/06/20 14:05:34 by gamoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Parametros	-Un puntero a una cadena de caracteres 's',
 * 		-Un "file descriptor" 'ft.
 *
 * Esta funcion escribe la cadena 's' en el archivo caracterizado por 'fd' 
 * seguido de un retorno a la linea.
 *
 * Devuelve: n/a es tipo void. */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
