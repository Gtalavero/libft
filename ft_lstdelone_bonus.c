/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtalaver <gtalaver@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 16:21:12 by gtalaver          #+#    #+#             */
/*   Updated: 2019/12/10 13:33:39 by gtalaver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** [ESP]
** Toma como parametro un elemento "lst" y libera la memoria usando la función
** "del" pasada como parámetro. No se libera la memoria del siguiente elemento.
**
** [ENG]
** Takes as a parameter an element and frees the memory of the element’s content
** using the function’del’ given as a parameter.
** The memory of ’next’ must not be freed.
*/

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
		lst = NULL;
	}
}
