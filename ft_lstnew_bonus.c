/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtalaver <gtalaver@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 16:09:28 by gtalaver          #+#    #+#             */
/*   Updated: 2019/12/10 13:53:45 by gtalaver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates and returns a new element.  The variable ’content’ is initialized
** with the value of the parameter ’content’.
** The variable ’next’ is initialized to NULL.
*/

t_list	*ft_lstnew(void const *content)
{
	t_list *list;

	if ((list = (t_list *)malloc(sizeof(t_list))))
	{
		list->content = (void *)content;
		list->next = NULL;
	}
	return (list);
}
