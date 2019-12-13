/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtalaver <gtalaverodev@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 20:13:54 by gtalaver          #+#    #+#             */
/*   Updated: 2019/12/11 15:22:32 by gtalaver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** [ESP]
** Concatena 2 strings, añadiendo "src" a "dst", limitando el tamaño de la
** string resultante con "size".
** "Dst" deberá tener espacio para los elementos de "src".
** Retornará la longitud de la string resultante.
**
** [ENG]
** Concatenates 2 strings, adding "src" to "dst", limiting the result
** string size.
** "Dst" may have enought slots for the elements of "src".
** Return the lenght of the string created.
*/

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int		i;
	int		j;
	size_t	lenght;

	i = 0;
	j = 0;
	lenght = ft_strlen(dst);
	if (size > 0 && size > lenght)
	{
		i = lenght;
		while (src[j] && i < (int)size - 1)
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = '\0';
		return (lenght + ft_strlen(src));
	}
	return (size + ft_strlen(src));
}
