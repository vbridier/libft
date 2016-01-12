/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbridier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 12:42:14 by vbridier          #+#    #+#             */
/*   Updated: 2016/01/12 12:22:16 by vbridier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <errno.h>

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	int		i;

	i = 0;
	if (!(ptr = ft_strnew(ft_strlen(s1))))
	{
		errno = ENOMEM;
		return (NULL);
	}
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	return (ptr);
}
