/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdragomi <vdragomi@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 16:41:39 by vdragomi          #+#    #+#             */
/*   Updated: 2021/05/19 12:31:16 by vdragomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	i = 0;
	substr = (char *)malloc(sizeof(*s) + (len + 1));
	if (!substr)
		return (NULL);
	while (s[start] != '\0')
	{
		if (i < len)
		{
			substr[i] = s[start];
			i++;
		}
		start++;
	}
	substr[i] = 0;
	return (substr);
}
