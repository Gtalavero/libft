/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtalaver <gtalaver@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 13:10:58 by gtalaver          #+#    #+#             */
/*   Updated: 2019/12/10 14:01:14 by gtalaver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The memcmp() function returns an integer less than, equal to, or greater than
** zero if the first n bytes of s1 is found, respectively, to be less than,
** to match, or be greater than the first n bytes of s2.
*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (!n)
		return (0);
	while (++i < n && *str1 == *str2)
	{
		str1++;
		str2++;
	}
	return ((int)(*str1 - *str2));
}
