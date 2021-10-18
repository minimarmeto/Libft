/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 20:16:23 by david             #+#    #+#             */
/*   Updated: 2021/10/18 13:47:51 by dgomez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ******************************** LIBRERIAS ******************************* */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

/* ******************************* PROTOTIPOS ******************************* */

/* ******************************** FUNCIONES ******************************* */

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}
