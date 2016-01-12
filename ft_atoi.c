/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbridier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/06 15:55:01 by vbridier          #+#    #+#             */
/*   Updated: 2016/01/12 12:15:11 by vbridier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		res;
	int		sign;

	res = 0;
	while (*str == '\n' || *str == '\v' || *str == '\r' || *str == '\f' ||
			*str == '\t' || *str == ' ')
		str++;
	sign = (*str == '-' ? 1 : 0);
	while (*str == '0')
		str++;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		res = (res * 10) + (*str - '0');
		str++;
	}
	return (sign ? -(res) : res);
}
