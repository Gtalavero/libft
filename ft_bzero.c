/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtalaver <gtalaverodev@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 18:11:58 by gtalaver          #+#    #+#             */
/*   Updated: 2019/12/11 15:11:38 by gtalaver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** [ENG]
** Erases the data in the "n" bytes of the memory starting at the location
** pointed by "s" writing zeroes.
**
** [ESP]
** Elimina los datos escribiendo ceros en los "n" bytes de memoria empezando por
** la dirección apuntada por "s"
*/

void	ft_bzero(void *s, size_t n)
{
	size_t		i;
	char		*str;

	i = 0;
	str = (char *)s;
	while (i < n)
		str[i++] = 0;
}
