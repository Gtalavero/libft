/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtalaver <gtalaver@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 14:38:52 by gtalaver          #+#    #+#             */
/*   Updated: 2019/12/10 19:39:49 by gtalaver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** If the character passed as an argument is a lowercase, convert to upper
*/

int		ft_toupper(int c)
{
	return ((c >= 97 && c <= 122) ? c - 32 : c);
}
