/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungtlee <jungtlee@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/08 17:22:44 by jungtlee          #+#    #+#             */
/*   Updated: 2020/04/16 10:09:34 by jungtlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	idx;
	unsigned int	idx1;
	long long		idx2;

	idx = 0;
	idx1 = 0;
	idx2 = -1;
	while (dst[idx] != '\0')
		idx++;
	while (src[idx1] != '\0')
	{
		if (idx + idx1 + 1 < size)
		{
			dst[idx + idx1] = src[idx1];
			idx2 = idx1 + idx;
		}
		idx1++;
	}
	if (idx2 != -1)
		dst[idx2 + 1] = '\0';
	if (size < idx)
		idx = size;
	return (idx + idx1);
}
