/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungtlee <jungtlee@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/08 17:21:27 by jungtlee          #+#    #+#             */
/*   Updated: 2020/04/08 17:21:28 by jungtlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*temp;
	unsigned int	i;

	i = 0;
	temp = (unsigned char *)s;
	while (i < n)
	{
		if (temp[i] == (unsigned char)c)
			return ((void *)(temp + i));
		i++;
	}
	return (NULL);
}
