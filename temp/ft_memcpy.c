/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungtlee <jungtlee@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/08 17:21:37 by jungtlee          #+#    #+#             */
/*   Updated: 2020/04/08 17:21:39 by jungtlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*temp;
	unsigned char	*stemp;
	size_t			idx;

	idx = 0;
	if (dest == 0 && src == 0)
		return (0);
	temp = (unsigned char *)dest;
	stemp = (unsigned char *)src;
	while (idx < n)
	{
		temp[idx] = stemp[idx];
		idx++;
	}
	return (dest);
}
