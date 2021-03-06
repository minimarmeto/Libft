/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-b <dgomez-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 17:07:43 by dgomez-b          #+#    #+#             */
/*   Updated: 2021/10/21 15:49:45 by dgomez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ******************************* LIBRERIAS ******************************** */

#include "libft.h"

/* ******************************* FUNCIONES ******************************** */

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen((char *) s);
	while (i > 0 && s[i] != (unsigned char) c)
		i--;
	if (s[i] != (unsigned char) c)
		return (0);
	return ((char *)(s + i));
}
