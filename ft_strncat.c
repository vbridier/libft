/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbridier <vbridier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/06 12:46:56 by vbridier          #+#    #+#             */
/*   Updated: 2016/01/12 12:23:37 by vbridier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char		*ptrdst;
	const char	*ptrsrc;

	ptrdst = s1 + ft_strlen(s1);
	ptrsrc = s2;
	while (*ptrsrc && n--)
		*ptrdst++ = *ptrsrc++;
	*ptrdst = '\0';
	return (s1);
}
