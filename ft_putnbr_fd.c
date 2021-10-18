/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-b <dgomez-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 20:26:55 by david             #+#    #+#             */
/*   Updated: 2021/10/18 16:17:41 by dgomez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ******************************* LIBRERIAS ******************************** */

#include "libft.h"

/* ******************************* FUNCIONES ******************************** */

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	c = '0';
	if (n < 0)
	{
		c = '0' + ((n % 10) * -1);
		n /= 10;
		if (write(fd, "-", 1) == -1)
			return ;
		if (n != 0)
			ft_putnbr_fd(n * -1, fd);
	}
	else if (n > 0)
	{
		c = '0' + (n % 10);
		n /= 10;
		if (n != 0)
			ft_putnbr_fd(n, fd);
	}
	if (write(fd, &c, 1) == -1)
		return ;
}
