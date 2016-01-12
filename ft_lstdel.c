/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbridier <vbridier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/10 19:21:05 by vbridier          #+#    #+#             */
/*   Updated: 2016/01/12 12:17:44 by vbridier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*act;
	t_list	*tmp;

	act = *alst;
	while (act != NULL)
	{
		tmp = act->next;
		ft_lstdelone(&act, del);
		act = tmp;
	}
	*alst = NULL;
}
