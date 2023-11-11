/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgils <jgils@student.42.rio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 19:04:47 by jgils             #+#    #+#             */
/*   Updated: 2023/11/09 19:16:25 by jgils            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*newnext;

	while (*lst)
	{
		newnext = (*lst)->next;
		del((*lst)->content);
		free(lst);
		*lst = newnext;
	}
	*lst = NULL;
}
