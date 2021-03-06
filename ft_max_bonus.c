/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tisabel <tisabel@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/25 20:48:15 by tisabel           #+#    #+#             */
/*   Updated: 2020/07/27 05:08:49 by tisabel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Compares the integers and returns the largest of the two
*/

int	ft_max(int one, int two)
{
	if (one > two)
		return (one);
	return (two);
}
