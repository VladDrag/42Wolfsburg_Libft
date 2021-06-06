/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdragomi <vdragomi@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 18:01:51 by vdragomi          #+#    #+#             */
/*   Updated: 2021/05/24 10:45:08 by vdragomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* Allocates (with malloc(3)) and returns a new
* element. The variable ’content’ is initialized
* with the value of the parameter ’content’. The
* variable ’next’ is initialized to NULL.
* t_list	*ft_lstnew(void *content)
*/
t_list	*ft_lstnew(void *content)
{
	t_list	*new_list;

	new_list = (t_list *)malloc(sizeof(t_list));
	if (new_list != 0)
	{
		new_list->content = content;
		new_list->next = NULL;
	}
	return (new_list);
}
