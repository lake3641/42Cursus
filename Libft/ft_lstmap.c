/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungtlee <jungtlee@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/08 17:21:06 by jungtlee          #+#    #+#             */
/*   Updated: 2020/04/16 09:42:24 by jungtlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*rtn;
	t_list	*temp;

	rtn = 0;
	if (lst == 0)
		return (0);
	while (lst != 0)
	{
		if ((temp = ft_lstnew(f(lst->content))) == 0)
		{
			ft_lstclear(&rtn, del);
			return (0);
		}
		ft_lstadd_back(&rtn, temp);
		lst = lst->next;
	}
	return (rtn);
}
