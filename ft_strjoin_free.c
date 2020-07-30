/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtalaver <gtalaverodev@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 13:39:47 by gtalaver          #+#    #+#             */
/*   Updated: 2020/07/30 15:42:18 by gtalaver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Concatenate s1 and s2 but freeing dynamic allocated memory
** NOTE: See ft_strjoin
*/

char	*ft_strjoin_free(char const *s1, char const *s2, int to_free)
{
	char	*res;

	res = ft_strjoin(s1, s2);
	if (to_free & 1)
		free((void **)s1);
	if (to_free & 2)
		free((void **)s2);
	return (res);
}
