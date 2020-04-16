/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungtlee <jungtlee@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/08 17:20:31 by jungtlee          #+#    #+#             */
/*   Updated: 2020/04/08 17:20:33 by jungtlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *iterator;

	if (lst == 0 || new == 0)
		return ;
	if (*lst == 0)
	{
		*lst = new;
		return ;
	}
	iterator = *lst;
	while (iterator->next != 0)
		iterator = iterator->next;
	iterator->next = new;
	return ;
}
