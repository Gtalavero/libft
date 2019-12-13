/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtalaver <gtalaver@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 22:36:33 by gtalaver          #+#    #+#             */
/*   Updated: 2019/12/10 14:02:25 by gtalaver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Copies n bytes from memory area src to memory of dest
*/

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*source;
	char	*dst;

	source = (char *)src;
	dst = (char *)dest;
	if (!dest && !src)
		return (dest);
	while (n--)
		*dst++ = *source++;
	return (dest);
}
