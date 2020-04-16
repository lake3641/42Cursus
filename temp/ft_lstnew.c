/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungtlee <jungtlee@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/08 17:21:11 by jungtlee          #+#    #+#             */
/*   Updated: 2020/04/08 17:21:12 by jungtlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*rtn;

	if ((rtn = (t_list *)malloc(sizeof(t_list))) == 0)
		return (0);
	rtn->next = 0;
	rtn->content = content;
	return (rtn);
}
