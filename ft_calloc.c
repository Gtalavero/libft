/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtalaver <gtalaverodev@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 17:30:38 by gtalaver          #+#    #+#             */
/*   Updated: 2019/12/11 15:12:44 by gtalaver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** [ENG]
** Allocates memory for an array of "n" elements of "size" bytes each and
** returns a pointer to the allocated memory
** [ESP]
** Reserva memoria para un array de "n" elementos de "size" bytes cada uno y
** devuelve un puntero a la memoria reservada
*/

void	*ft_calloc(size_t n, size_t size)
{
	void	*ptr;

	if (!(ptr = (char *)malloc(size * n)))
		return (0);
	ft_memset(ptr, 0, n * size);
	return (ptr);
}
