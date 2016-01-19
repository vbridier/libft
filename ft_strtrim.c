/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbridier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/07 13:45:54 by vbridier          #+#    #+#             */
/*   Updated: 2016/01/19 20:24:20 by vbridier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strtrim(char const *s)
{
	char	*str;
	char	*str2;
	int		i;

	if (s == NULL)
		return (NULL);
	i = 0;
	if (!(str = ft_strnew(sizeof(char) * ft_strlen(s))))
		return (NULL);
	while (ft_iswhitespace(*s))
		s++;
	while (*s)
		str[i++] = *s++;
	str[i] = '\0';
	i = ft_strlen(str);
	str += i - 1;
	while (ft_iswhitespace(*str) && str--)
		i--;
	if (!(str2 = ft_strnew(sizeof(char) * i)))
		return (NULL);
	str2[i] = '\0';
	while (*str)
		str2[--i] = *str--;
	return (str2);
}
