/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtalaver <gtalaver@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 13:39:47 by gtalaver          #+#    #+#             */
/*   Updated: 2019/12/10 14:25:26 by gtalaver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Returns a new string result of the concatenation of 's1' and 's2'
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	int		i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	if (!(s = (char*)malloc(sizeof(*s) * (ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (0);
	while (*s1)
		s[i++] = *s1++;
	while (*s2)
		s[i++] = *s2++;
	s[i] = 0;
	return (s);
}
