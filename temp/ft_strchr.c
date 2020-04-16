/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungtlee <jungtlee@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/08 17:22:26 by jungtlee          #+#    #+#             */
/*   Updated: 2020/04/08 17:22:27 by jungtlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int idx;

	idx = 0;
	while (s[idx] != '\0')
	{
		if (s[idx] == (char)c)
			return ((char *)s + idx);
		idx++;
	}
	if (c == '\0')
		return ((char *)s + idx);
	return (0);
}
