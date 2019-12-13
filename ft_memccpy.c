/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtalaver <gtalaverodev@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 00:03:42 by gtalaver          #+#    #+#             */
/*   Updated: 2019/12/11 15:20:05 by gtalaver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** [ESP]
** Copia "n" bytes de la memoria de "src" a la de "dest". Para cuando se
** encuentra un carácter "c".
**
** [ENG]
** Copies "n" bytes from the memory of "src" to the memory of "dest". Stopped
** when the character "c" is found.
*/

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*source;
	char	*dst;
	size_t	i;

	source = (char *)src;
	dst = (char *)dest;
	i = 0;
	while (i < n)
	{
		dst[i] = source[i];
		if (source[i] == (char)c || dst[i] == (char)c)
		{
			return (dest + (++i));
		}
		i++;
	}
	return (NULL);
}
