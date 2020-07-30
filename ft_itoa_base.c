/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtalaver <gtalaverodev@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 20:20:28 by gtalaver          #+#    #+#             */
/*   Updated: 2020/07/02 18:53:53 by gtalaver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** [ESP]
** Convierte un entero "value" en un string dependiendo de su base
** [ENG]
** Converts an integer "value" in to a string dependings of its base
*/

char	*ft_itoa_base(unsigned long int value, int base)
{
	int					size;
	unsigned long int	number;
	char				*result;
	char				*base_characters;

	number = value;
	base_characters = "0123456789ABCDEF";
	if (base < 2 || base > 16)
		return (NULL);
	size = ft_numlen(number, base);
	if (!(result = (char*)malloc(sizeof(*result) * (size + 1))))
		return (NULL);
	result[size--] = '\0';
	result[0] = '0';
	while (number > 0)
	{
		result[size--] = base_characters[number % base];
		number /= base;
	}
	return (result);
}