/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtalaver <gtalaver@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 20:10:20 by gtalaver          #+#    #+#             */
/*   Updated: 2019/12/10 12:52:19 by gtalaver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** [ENG]
** Adds the element "new" at the end of the list 'lst'.
** [ESP]
** Añade el elemento "new" al final de la lista "lst"
*/

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (new != NULL && lst[0] != NULL)
		ft_lstlast(lst[0])->next = new;
	else if (lst[0] == NULL)
		lst[0] = new;
}
