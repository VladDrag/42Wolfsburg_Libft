/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdragomi <vdragomi@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 14:27:18 by vdragomi          #+#    #+#             */
/*   Updated: 2021/05/25 15:53:29 by vdragomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* Allocates (with malloc(3)) and returns an array
* of strings obtained by splitting ’s’ using the
* character ’c’ as a delimiter. The array must be
* ended by a NULL pointer.
*/
static int	ft_wordcount(char const *s, char c)
{
	int	i;
	int	count;
	int	found_del;

	found_del = 0;
	i = 0;
	count = 1;
	while (s[i])
	{
		if (found_del && s[i] != c)
		{
			count++;
			found_del = 0;
		}
		else if (s[i] == c)
			found_del = 1;
		i++;
	}
	return (count);
}

static int	ft_get_word_len(const char *s, char c)
{
	int	len;

	len = 0;
	while (*s != c && *s)
	{
		s++;
		len++;
	}
	return (len);
}

static char	**ft_split_words(char **rtn, const char *s, const char c)
{
	int	j;
	int	len;

	j = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			len = ft_get_word_len(s, c);
			rtn[j] = (char *)ft_calloc(len + 1, sizeof(char));
			if (!rtn[j])
				return (NULL);
			ft_memcpy(rtn[j], s, (size_t)len);
			s += len;
			j++;
		}
	}
	return (rtn);
}

char	**ft_split(char const *s, char c)
{
	char	**rtn;

	if (s == NULL)
		return (NULL);
	rtn = (char **)ft_calloc(ft_wordcount(s, c) + 1, sizeof(char *));
	if (rtn == NULL)
		return (NULL);
	rtn = ft_split_words(rtn, s, c);
	return (rtn);
}
