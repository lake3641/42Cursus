/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungtlee <jungtlee@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/08 17:23:16 by jungtlee          #+#    #+#             */
/*   Updated: 2020/04/16 08:59:15 by jungtlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	if (big == 0 || little == 0)
		return (0);
	if (*little == '\0')
		return ((char *)(big));
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (i + j < len && big[i + j] != '\0' && little[j] != '\0'
				&& big[i + j] == little[j])
			j++;
		if (little[j] == 0)
			return ((char *)(&big[i]));
		i++;
	}
	return (0);
}
