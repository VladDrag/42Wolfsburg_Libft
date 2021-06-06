/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdragomi <vdragomi@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 12:57:06 by vdragomi          #+#    #+#             */
/*   Updated: 2021/05/18 14:10:43 by vdragomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

static int	check_params(char *merger, char const *s1, char const *s2)
{
	if (!(s1 && s2))
		return (0);
	if (merger == NULL)
	{
		free(merger);
		return (0);
	}
	else
		return (1);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*merger;

	merger = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (check_params(merger, s1, s2) == 0)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		merger[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		merger[i + j] = s2[j];
		j++;
	}
	merger[i + j] = '\0';
	return (merger);
}
