/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdragomi <vdragomi@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 11:17:50 by vdragomi          #+#    #+#             */
/*   Updated: 2021/05/24 10:56:19 by vdragomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* The memcmp() function compares the first n bytes (each
* interpreted as unsigned char) of the memory areas s1 and s2.
*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*c1;
	unsigned char	*c2;
	size_t			i;
	int				res;

	c1 = (unsigned char *) s1;
	c2 = (unsigned char *) s2;
	i = 0;
	res = 0;
	while (i < n)
	{
		if (c1[i] != c2[i])
		{
			res = c1[i] - c2[i];
			i = n;
		}
		i++;
	}
	return (res);
}
