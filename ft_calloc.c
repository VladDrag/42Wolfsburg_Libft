/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdragomi <vdragomi@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 11:48:43 by vdragomi          #+#    #+#             */
/*   Updated: 2021/05/24 10:33:27 by vdragomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* The C library function void *calloc(size_t nitems, size_t size) 
* allocates the requested memory and returns a pointer to it. 
* The difference in malloc and calloc is that malloc does not set 
* the memory to zero where as calloc sets allocated memory to zero.
*/
void	*ft_calloc(size_t nitems, size_t size)
{
	void	*ptr;

	ptr = malloc(nitems * size);
	if (ptr == 0)
		return (ptr);
	ft_bzero(ptr, size * nitems);
	return (ptr);
}
