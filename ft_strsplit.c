/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbridier <vbridier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 17:48:08 by vbridier          #+#    #+#             */
/*   Updated: 2016/01/12 12:24:49 by vbridier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		i;
	int		len;

	tab = (char **)ft_memalloc(sizeof(char*) * ft_strlen(s));
	if (!tab)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			len = ft_wd_len(s, c);
			tab[i++] = ft_strsub(s, 0, len);
			s = s + len;
		}
		else
			s++;
	}
	tab[i] = NULL;
	return (tab);
}
