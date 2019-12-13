/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtalaver <gtalaverodev@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 11:01:19 by gtalaver          #+#    #+#             */
/*   Updated: 2019/12/11 15:20:30 by gtalaver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** [ESP]
** Copia "n" bytes de la memoria de "src" a "dest". Pueden superponerse.
** Primero se copiará de "src" a una matriz temporal "temp" y de ahí a
** "dest".
**
** [ENG]
** Copies "n" bytes from the memory of "src" to "dest". Memories may overlap.
** First, the bytes in "src" are copied into a temporary array and then to
** "dest".
*/

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*temp;
	char	*dst;

	temp = (char *)src;
	dst = (char *)dest;
	if (temp < dst)
	{
		while (n--)
			dst[n] = temp[n];
	}
	else
		ft_memcpy(dst, temp, n);
	return (dest);
}
