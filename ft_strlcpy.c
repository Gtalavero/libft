/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtalaver <gtalaverodev@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 16:09:10 by gtalaver          #+#    #+#             */
/*   Updated: 2019/12/11 15:20:48 by gtalaver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Copies "dstsize" of the string "src" into "dst" and return the total
** lenght of the result string.
*/

size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	int				counter;

	i = 0;
	if (!src)
		return (0);
	counter = (unsigned int)ft_strlen(src);
	if (!dstsize)
		return (counter);
	while (src[i] && i < (dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (counter);
}
