/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdragomi <vdragomi@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 12:36:03 by vdragomi          #+#    #+#             */
/*   Updated: 2021/05/24 10:34:31 by vdragomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* The C library function int isalnum(int c) checks 
* if the passed character is alphanumeric.
*/
int	ft_isalnum(int c)

{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}
