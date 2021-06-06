/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdragomi <vdragomi@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 08:55:18 by vdragomi          #+#    #+#             */
/*   Updated: 2021/05/24 10:55:35 by vdragomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* The memchr() function returns a pointer to the first occurrence of c 
* (converted to an unsigned char) in the first n bytes 
* (each interpreted as an unsigned char) of memory area s,
* or a null pointer if c does not occur.
*/
void	*ft_memchr(const void *s1, int c, size_t n)
{
	size_t	i;

	if (!s1)
		return (NULL);
	i = 0;
	while (i < n)
	{
		if (((unsigned char *)(s1))[i] == (unsigned char)(c))
			return ((void *)(s1 + i));
		i++;
	}
	return (NULL);
}
