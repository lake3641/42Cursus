/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungtlee <jungtlee@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/08 16:15:14 by jungtlee          #+#    #+#             */
/*   Updated: 2020/04/08 16:15:16 by jungtlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void		*rtn;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if ((rtn = malloc(size * nmemb)) == 0)
		return (0);
	ft_memset(rtn, 0, size * nmemb);
	return (rtn);
}
