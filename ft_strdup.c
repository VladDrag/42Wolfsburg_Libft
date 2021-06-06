/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdragomi <vdragomi@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 12:17:21 by vdragomi          #+#    #+#             */
/*   Updated: 2021/05/24 11:54:49 by vdragomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* The function strdup() is used to duplicate a string. 
* It returns a pointer to null-terminated byte string.
*/
char	*ft_strdup(const char *str)
{
	char	*rtn;
	size_t	len;

	len = ft_strlen(str) + 1;
	rtn = malloc(sizeof(char) * len);
	if (!rtn)
		return (NULL);
	rtn = ft_memcpy(rtn, str, len);
	return (rtn);
}
