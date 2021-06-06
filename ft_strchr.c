/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdragomi <vdragomi@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 12:54:59 by vdragomi          #+#    #+#             */
/*   Updated: 2021/05/24 11:53:51 by vdragomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* The C library function char *strchr(const char *str, int c) 
* searches for the first occurrence of the character c
* in the string pointed to by the argument str.
*/
char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *) s;
	while (s[i])
	{
		if (s[i] == c)
			return (&str[i]);
		else
			i++;
	}
	if (c == str[i])
		return (&str[i]);
	return (0);
}
