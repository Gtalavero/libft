/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtalaver <gtalaver@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 19:59:38 by gtalaver          #+#    #+#             */
/*   Updated: 2019/12/10 14:23:47 by gtalaver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Returns a pointer to a new string obtained duplicating "s"
*/

char	*ft_strdup(const char *s)
{
	char	*str;
	int		slen;

	slen = ft_strlen(s) + 1;
	if ((str = malloc(slen)))
	{
		ft_strlcpy(str, s, slen);
		return (str);
	}
	return (NULL);
}
