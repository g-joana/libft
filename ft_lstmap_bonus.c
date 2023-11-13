/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgils <jgils@student.42.rio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:07:00 by jgils             #+#    #+#             */
/*   Updated: 2023/11/13 12:52:30 by jgils            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap_bonus(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;

	while (lst)
	{
		newlst->next = ft_lstnew_bonus(newlst);
		if (!newlst->next)
			ft_lstclear_bonus(&newlst, del);
		newlst->next = f(lst->content);
		lst = lst->next;
	}
	newlst = NULL;
	return (newlst);
}
