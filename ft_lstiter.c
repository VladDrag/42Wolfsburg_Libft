/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdragomi <vdragomi@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 15:42:46 by vdragomi          #+#    #+#             */
/*   Updated: 2021/05/25 12:45:07 by vdragomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* Iterates the list ’lst’ and applies the function ’f’ to the content of
* each element.
*/
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst != 0 && f != 0)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}
