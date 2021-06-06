/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdragomi <vdragomi@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 20:30:47 by vdragomi          #+#    #+#             */
/*   Updated: 2021/05/24 13:16:27 by vdragomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* The memccpy() function copies no more than n bytes from memory
* area src to memory area dest, stopping when the character c is
* found.
* If the memory areas overlap, the results are undefined.
*/
void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	const char	*src_p;
	char		*dest_p;
	size_t		i;

	src_p = (char *) src;
	dest_p = (char *) dest;
	i = 0;
	while (i < n)
	{
		*dest_p = *(src_p + i);
		dest_p++;
		if (*(src_p + i) == c)
			i = n;
		else
		{
			i++;
			if (i == n)
				dest_p = 0;
		}
	}
	if (n == 0)
		dest_p = 0;
	return (dest_p);
}
