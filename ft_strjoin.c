/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbridier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/06 17:13:24 by vbridier          #+#    #+#             */
/*   Updated: 2016/01/12 12:22:57 by vbridier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;

	i = 0;
	if (!(str = ft_strnew(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)))))
		return (NULL);
	while (*s1 != '\0')
	{
		str[i++] = *s1++;
	}
	while (*s2 != '\0')
	{
		str[i++] = *s2++;
	}
	str[i] = '\0';
	return (str);
}
