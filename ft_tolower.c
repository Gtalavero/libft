/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtalaver <gtalaver@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 15:57:54 by gtalaver          #+#    #+#             */
/*   Updated: 2019/12/10 19:39:08 by gtalaver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** If the character passed as an argument is an uppercase, convert to lower
*/

int		ft_tolower(int c)
{
	return ((c >= 'A' && c <= 'Z') ? (c + 32) : c);
}
