/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbridier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 11:28:47 by vbridier          #+#    #+#             */
/*   Updated: 2016/01/12 12:19:37 by vbridier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *tmpdst;
	char *tmpsrc;

	tmpdst = (char *)dst;
	tmpsrc = (char *)src;
	if (tmpsrc <= tmpdst)
	{
		tmpdst += len - 1;
		tmpsrc += len - 1;
		while (len--)
			*tmpdst-- = *tmpsrc--;
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
