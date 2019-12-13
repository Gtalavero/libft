/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtalaver <gtalaver@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 18:37:48 by gtalaver          #+#    #+#             */
/*   Updated: 2019/12/10 00:44:51 by gtalaver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Convert a string to a integer
*/

int	ft_atoi(const char *str)
{
	int	sign;
	int	numb;

	sign = 1;
	numb = 0;
	while (*str == '\t' || *str == '\n' ||
		*str == '\v' || *str == '\f' ||
		*str == '\r' || *str == ' ')
		str++;
	if (*str == '-')
		sign *= -1;
	if (*str == '+' || *str == '-')
		str++;
	while (ft_isdigit(*str))
		numb = numb * 10 + (*str++ - 48);
	return (numb * sign);
}
