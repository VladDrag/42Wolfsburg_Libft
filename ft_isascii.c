/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdragomi <vdragomi@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 12:49:18 by vdragomi          #+#    #+#             */
/*   Updated: 2021/05/24 13:11:18 by vdragomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* Checks whether c  fits into the ASCII character set.
*/
int	ft_isascii(int c)
{
	if (!(c >= 0 && c <= 127))
		return (0);
	return (1);
}
