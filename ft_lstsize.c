/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdragomi <vdragomi@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 14:55:32 by vdragomi          #+#    #+#             */
/*   Updated: 2021/05/24 10:46:16 by vdragomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* Counts the number of elements in a list.
*/
int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*list;

	if (!lst)
		return (0);
	i = 0;
	list = lst;
	while (list != NULL)
	{
		list = list->next;
		i++;
	}
	return (i);
}
