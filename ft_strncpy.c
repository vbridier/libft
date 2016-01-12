/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbridier <vbridier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 14:00:32 by vbridier          #+#    #+#             */
/*   Updated: 2016/01/12 12:23:58 by vbridier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t i;

	i = 0;
	while (src[i] && i <= (n - 1))
	{
		dst[i] = src[i];
		i++;
	}
	while (i <= (n - 1))
		dst[i++] = '\0';
	return (dst);
}
