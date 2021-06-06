/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdragomi <vdragomi@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 11:51:41 by vdragomi          #+#    #+#             */
/*   Updated: 2021/05/18 11:43:44 by vdragomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*s;

	i = 0;
	s = (char *) str;
	while (str[i])
		i++;
	while (i >= 0)
	{
		if (str[i] == c)
			return (&s[i]);
		else
			i--;
	}
	return (0);
}
