/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbridier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 11:28:47 by vbridier          #+#    #+#             */
/*   Updated: 2016/01/12 12:18:58 by vbridier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *tmpdst;
	unsigned char *tmpsrc;

	tmpdst = (unsigned char *)dst;
	tmpsrc = (unsigned char *)src;
	while (n > 0 && (unsigned char)c != *tmpsrc)
	{
		*tmpdst++ = *tmpsrc++;
		n--;
	}
	if (n > 0)
	{
		*tmpdst++ = *tmpsrc++;
		return ((void *)tmpdst);
	}
	return (NULL);
}
