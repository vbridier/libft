/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbridier <vbridier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/06 12:55:45 by vbridier          #+#    #+#             */
/*   Updated: 2016/01/12 12:24:41 by vbridier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char *ptr;

	ptr = s + ft_strlen(s) + 1;
	while (ptr-- > s)
	{
		if ((char)c == *ptr)
			return ((char *)ptr);
	}
	return (0);
}
