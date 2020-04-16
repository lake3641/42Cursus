/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungtlee <jungtlee@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/08 17:21:17 by jungtlee          #+#    #+#             */
/*   Updated: 2020/04/08 17:21:18 by jungtlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		rtn;
	t_list	*iterator;

	rtn = 0;
	if (lst == 0)
		return (rtn);
	iterator = lst;
	while (iterator != 0)
	{
		iterator = iterator->next;
		rtn++;
	}
	return (rtn);
}
