/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbridier <vbridier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/10 15:42:49 by vbridier          #+#    #+#             */
/*   Updated: 2016/01/12 12:16:52 by vbridier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	int		sign;
	int		nbrlen;

	sign = (n < 0 ? 1 : 0);
	nbrlen = ft_nbrlen(n);
	if (!(str = (char *)ft_memalloc(sizeof(char) * (nbrlen + sign + 1))))
		return (NULL);
	str = str + nbrlen + sign;
	*str = '\0';
	if (n == 0)
		*--str = '0';
	while (n != 0)
	{
		*--str = (sign ? -1 * (n % 10) + '0' : n % 10 + '0');
		n = n / 10;
	}
	if (sign)
		*--str = '-';
	return (str);
}
