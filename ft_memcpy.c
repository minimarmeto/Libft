/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 17:54:01 by dgomez-b          #+#    #+#             */
/*   Updated: 2021/09/14 16:12:33 by dgomez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ******************************* LIBRERIAS ******************************** */

#include <string.h>

/* ******************************* PROTOTIPOS ******************************* */

/* ******************************* FUNCIONES ******************************** */

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	int	i;

	i = (size_t)len;
	if (dst != src)
		while (len-- > 0)
			((char *)dst)[len] = ((char *)src)[len];
	return (dst);
}
