/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungtlee <jungtlee@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/08 17:23:11 by jungtlee          #+#    #+#             */
/*   Updated: 2020/04/16 08:35:06 by jungtlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	idx;
	unsigned char	*ss1;
	unsigned char	*ss2;

	ss1 = (unsigned char*)s1;
	ss2 = (unsigned char*)s2;
	if (n == 0)
		return (0);
	idx = 0;
	while (ss1[idx] != '\0' && ss2[idx] != '\0' && idx < n)
	{
		if (ss1[idx] != ss2[idx])
			return (ss1[idx] - ss2[idx]);
		idx++;
	}
	if (idx == n)
		idx--;
	return (ss1[idx] - ss2[idx]);
}
