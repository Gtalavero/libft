/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtalaver <gtalaver@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 16:49:27 by gtalaver          #+#    #+#             */
/*   Updated: 2019/12/10 19:32:05 by gtalaver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Returns a pointer to the 1º ocurrence of the character 'c' in the string 's'
*/

char	*ft_strrchr(const char *s, int c)
{
	const char	*str;

	str = s;
	while (*s)
		s++;
	if (c == 0)
		return ((char *)s);
	while (s >= str)
	{
		if (*s == c)
			return ((char *)s);
		s--;
	}
	return (0);
}
