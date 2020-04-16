/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungtlee <jungtlee@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/08 17:21:43 by jungtlee          #+#    #+#             */
/*   Updated: 2020/04/08 17:21:44 by jungtlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_rev_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*temp;
	unsigned char	*stemp;
	size_t			idx;

	if (n == 0)
		return (dest);
	idx = n - 1;
	temp = (unsigned char *)dest;
	stemp = (unsigned char *)src;
	while (1)
	{
		temp[idx] = stemp[idx];
		if (idx != 0)
			idx--;
		else
			break ;
	}
	return (dest);
}

void		*ft_memmove(void *dest, const void *src, size_t n)
{
	if ((long long)dest == (long long)src)
		return (dest);
	else if ((long long)dest < (long long)src)
		ft_memcpy(dest, src, n);
	else
		ft_rev_memcpy(dest, src, n);
	return (dest);
}
