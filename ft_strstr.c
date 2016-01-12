/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbridier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 15:48:46 by vbridier          #+#    #+#             */
/*   Updated: 2016/01/12 12:24:58 by vbridier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t ls2;

	ls2 = ft_strlen(s2);
	if (!*s2)
		return ((char *)s1);
	while (*s1)
	{
		if (!ft_memcmp(s1, s2, ls2))
			return ((char *)s1);
		s1++;
	}
	return (NULL);
}
