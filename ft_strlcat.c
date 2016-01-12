/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbridier <vbridier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/06 12:50:39 by vbridier          #+#    #+#             */
/*   Updated: 2016/01/12 12:23:05 by vbridier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	result;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	result = ft_strlen(src);
	while (dst[i] && i < size)
		i++;
	if (size)
	{
		while (src[j] && i < size - 1)
			dst[i++] = src[j++];
	}
	if (j > 0)
	{
		dst[i] = '\0';
		return (result + (i - j));
	}
	return (result + i);
}
