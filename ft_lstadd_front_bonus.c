/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtalaver <gtalaver@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 16:08:42 by gtalaver          #+#    #+#             */
/*   Updated: 2019/12/10 13:01:44 by gtalaver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** [ENG]
** Adds the element new at the beginning of the list
** [ESP]
** Añade el elemento "new" al principio de la lista "alst"
*/

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	if (*alst)
		new->next = *alst;
	*alst = new;
}
