/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdragomi <vdragomi@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 18:46:59 by vdragomi          #+#    #+#             */
/*   Updated: 2021/05/26 20:01:32 by vdragomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* The C library function int atoi(const char *str)
* converts the string argument str to an integer (type int).
*/
int	ft_atoi(const char	*str)
{
	int	i;
	int	sign;
	int	score;

	i = 0;
	sign = 1;
	score = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		score = score * 10 + (str[i] - 48);
		i++;
	}
	return (score * sign);
}
