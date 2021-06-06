/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdragomi <vdragomi@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 10:23:42 by vdragomi          #+#    #+#             */
/*   Updated: 2021/05/24 10:58:24 by vdragomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* The memmove() function copies n bytes from memory area src to
* memory area dest.  The memory areas may overlap: copying takes
* place as though the bytes in src are first copied into a
* temporary array that does not overlap src or dest, and the bytes
* are then copied from the temporary array to dest.
*/
void	*ft_memmove (void *dest, const void *src, size_t len)
{
	size_t	i;
	char	*destin;
	char	*source;

	destin = (char *)dest;
	source = (char *)src;
	i = 0;
	if (destin > source)
	{
		while (len > 0)
		{
			destin[len - 1] = source[len - 1];
			len--;
		}
	}
	else
	{
		while (i < len)
		{
			destin[i] = source[i];
			i++;
		}
	}
	return (dest);
}
