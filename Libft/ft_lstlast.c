/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungtlee <jungtlee@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/08 17:20:59 by jungtlee          #+#    #+#             */
/*   Updated: 2020/04/08 17:21:00 by jungtlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*iterator;

	if (lst == 0)
		return (0);
	iterator = lst;
	while (iterator->next != 0)
		iterator = iterator->next;
	return (iterator);
}
