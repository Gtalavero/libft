/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtalaver <gtalaver@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 16:44:42 by gtalaver          #+#    #+#             */
/*   Updated: 2019/12/10 14:12:08 by gtalaver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Fill with "n" bytes of "c" the memory of "s".
*/

void	*ft_memset(void *str, int c, size_t len)
{
	unsigned char	*string;

	string = (unsigned char *)str;
	while (len-- > 0)
		*(string++) = (unsigned char)c;
	return (str);
}
