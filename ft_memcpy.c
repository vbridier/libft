/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbridier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 11:28:47 by vbridier          #+#    #+#             */
/*   Updated: 2016/01/12 12:19:15 by vbridier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char *tmpdst;
	char *tmpsrc;

	tmpdst = (char *)dst;
	tmpsrc = (char *)src;
	while (n > 0)
	{
		*tmpdst++ = *tmpsrc++;
		n--;
	}
	return (dst);
}
