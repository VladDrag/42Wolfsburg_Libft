/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdragomi <vdragomi@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 15:27:15 by vdragomi          #+#    #+#             */
/*   Updated: 2021/05/25 13:21:56 by vdragomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* Adds the element ’new’ at the end of the list.
*/
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;
	t_list	*list;

	current = new;
	if (*lst == NULL)
		*lst = current;
	else
	{
		list = *lst;
		while (list->next != NULL)
			list = list->next;
		list->next = current;
	}
}
