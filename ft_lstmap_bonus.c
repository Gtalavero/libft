/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtalaver <gtalaverodev@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 16:57:08 by gtalaver          #+#    #+#             */
/*   Updated: 2019/12/11 15:20:22 by gtalaver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** [ESP]
** Aplica la función 'f' al contenido de cada elemento de una lista 'lst',
** creando una nueva lista con el nuevo contenido.
**
** [ENG]
** Iterates the list ’lst’ and applies the function ’f’ to the content
** of each element.
** Creates a new list resulti ng of the successive applications of function ’f’.
** The ’del’ function is used to delete the content of an element if needed.
**
** PARAMETERS
** #1.  The adress of a pointer to an element.
** #2.  The adress of the function used to iterate on the list.
** #3.  The adress of the function used to delete the content of an element
** if needed.
*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *aux;
	t_list *list;

	if (!lst)
		return (NULL);
	list = ft_lstnew(f(lst->content));
	aux = list;
	while (lst->next)
	{
		lst = lst->next;
		if (!(list->next = ft_lstnew(f(lst->content))))
		{
			del(list->next);
			free(list->next);
			return (NULL);
		}
		list = list->next;
	}
	return (aux);
}
