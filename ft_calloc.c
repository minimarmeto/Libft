/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-b <dgomez-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 16:16:55 by dgomez-b          #+#    #+#             */
/*   Updated: 2023/06/29 16:24:11 by dgomez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ********************************LIBRARIES********************************* */

#include "./libft.h"
#include <stdlib.h>

/* ********************************FUNCTIONS********************************* */

void	*ft_calloc(size_t count, size_t size)
{
	void	*b;

	b = malloc(count * size);
	if (!b)
		return (0);
	return (ft_bzero(b, count * size));
}