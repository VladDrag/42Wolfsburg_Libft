/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdragomi <vdragomi@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 15:03:28 by vdragomi          #+#    #+#             */
/*   Updated: 2021/05/24 10:43:43 by vdragomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* Returns the last element of the list.
*/
t_list	*ft_lstlast(t_list *lst)
{
	t_list	*list;

	if (lst == NULL)
		return (NULL);
	list = lst;
	while (list->next != NULL)
		list = list->next;
	return (list);
}
