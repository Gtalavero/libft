/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtalaver <gtalaverodev@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 17:24:28 by gtalaver          #+#    #+#             */
/*   Updated: 2019/12/11 15:21:03 by gtalaver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** [ESP]
** Aplica la función 'f' a cada elemento de la string 's' para crear una nueva
** string con los productos de dichas aplicaciones.
**
** [ENG]
** Applies the function ’f’ to each character of the string ’s’ to create a new
** string resulting from successive applications of ’f’.
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s || !f)
		return (NULL);
	if (!(str = malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (0);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = 0;
	return (str);
}
