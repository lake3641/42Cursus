/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungtlee <jungtlee@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/08 17:22:51 by jungtlee          #+#    #+#             */
/*   Updated: 2020/04/08 21:38:35 by jungtlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int idx;
	unsigned int idx1;

	if (src == 0 || dst == 0)
		return (0);
	idx = 0;
	idx1 = 0;
	while (src[idx] != '\0')
	{
		if (idx + 1 < size)
		{
			dst[idx] = src[idx];
			idx1 = idx;
		}
		idx++;
	}
	if (size == 0)
		return (idx);
	if (idx == 0)
		dst[0] = '\0';
	else if (size == 1)
		dst[0] = '\0';
	else
		dst[idx1 + 1] = '\0';
	return (idx);
}
