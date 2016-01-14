/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbridier <vbridier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/10 20:02:05 by vbridier          #+#    #+#             */
/*   Updated: 2016/01/14 08:20:55 by vbridier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*fresh;
	t_list	*end;

	if (lst == NULL || f == NULL)
		return (NULL);
	fresh = f(lst);
	end = fresh;
	while (lst->next)
	{
		lst = lst->next;
		end->next = f(lst);
		end = end->next;
	}
	return (fresh);
}
