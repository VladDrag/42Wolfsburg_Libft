/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdragomi <vdragomi@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 15:44:39 by vdragomi          #+#    #+#             */
/*   Updated: 2021/05/24 10:42:43 by vdragomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
* Takes as a parameter an element and frees the
* memory of the element’s content using the function
* ’del’ given as a parameter and free the element.
* The memory of ’next’ must not be freed.
*/
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst != 0 && del != 0)
	{
		(*del)(lst->content);
		free(lst);
	}
}
