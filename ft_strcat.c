/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbridier <vbridier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 22:06:54 by vbridier          #+#    #+#             */
/*   Updated: 2016/01/12 12:21:23 by vbridier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	char		*ptrdst;
	const char	*ptrsrc;

	ptrdst = s1 + ft_strlen(s1);
	ptrsrc = s2;
	while (*ptrsrc)
		*ptrdst++ = *ptrsrc++;
	*ptrdst = '\0';
	return (s1);
}
