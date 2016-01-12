/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbridier <vbridier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 22:13:17 by vbridier          #+#    #+#             */
/*   Updated: 2016/01/12 12:24:33 by vbridier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t ls2;

	ls2 = ft_strlen(s2);
	while (*s1 && n > 0)
	{
		if (!ft_memcmp(s1, s2, ls2) && ls2 <= n)
			return (char *)s1;
		n--;
		s1++;
	}
	return (0);
}
