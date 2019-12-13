/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtalaver <gtalaver@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 16:41:23 by gtalaver          #+#    #+#             */
/*   Updated: 2019/12/10 13:28:20 by gtalaver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** [ESP]
** ELimina y libera el elemento dado y sus sucesores, usando la función
** "del" pasada por parámetro y "free"
** [ENG]
** Deletes and frees the given element and every successor of that element,
** using the function ’del’ and free(3).
** Finally, the pointer to the list must be set to NULL.
**
** PARAMETERS
** #1.  The adress of a pointer to an element.
** #2.  The adress of the function used to delete the content of the element.
*/

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *lstaux;
	t_list *tmp;

	tmp = NULL;
	lstaux = *lst;
	while (lstaux)
	{
		tmp = lstaux->next;
		del(lstaux->content);
		free(lstaux);
		lstaux = tmp;
	}
	*lst = NULL;
}
