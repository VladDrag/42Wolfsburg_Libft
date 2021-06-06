/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdragomi <vdragomi@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 14:37:49 by vdragomi          #+#    #+#             */
/*   Updated: 2021/05/24 10:39:27 by vdragomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* Checks for any printable character including space.
*/
int	ft_isprint(int c)
{
	if (!(c >= 32 && c <= 126))
		return (0);
	return (1);
}
