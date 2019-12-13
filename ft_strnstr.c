/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtalaver <gtalaver@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 13:27:11 by gtalaver          #+#    #+#             */
/*   Updated: 2019/12/10 19:30:14 by gtalaver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Locate the first ocurrence of the substring 'to_find' in the string 'str' and
** return a pointer to this position
*/

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	c;

	i = 0;
	c = 0;
	if (!*to_find)
		return ((char *)str);
	while (str[i] && (size_t)i < len)
	{
		if (str[i] == to_find[0])
		{
			while (str[i + c] == to_find[c] && i + c < len)
			{
				if (to_find[c + 1] == '\0')
					return ((char *)&str[i]);
				c++;
			}
		}
		i++;
	}
	return (0);
}
