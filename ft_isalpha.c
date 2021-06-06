/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdragomi <vdragomi@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 19:40:50 by vdragomi          #+#    #+#             */
/*   Updated: 2021/05/24 10:35:02 by vdragomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* The C library function int isalpha(int c) checks if the passed 
* character is alphabetic.
*/
int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
