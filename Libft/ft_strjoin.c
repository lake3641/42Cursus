/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungtlee <jungtlee@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/08 17:22:38 by jungtlee          #+#    #+#             */
/*   Updated: 2020/04/08 21:41:06 by jungtlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*rtn;
	int		len[2];
	int		i;

	if (s1 == 0 || s2 == 0)
		return (0);
	len[0] = ft_strlen(s1);
	len[1] = ft_strlen(s2);
	if ((rtn = (char *)malloc(sizeof(char) * (len[0] + len[1] + 1))) == 0)
		return (0);
	i = 0;
	while (i < len[0])
	{
		rtn[i] = s1[i];
		i++;
	}
	while (i < len[0] + len[1])
	{
		rtn[i] = s2[i - len[0]];
		i++;
	}
	rtn[i] = '\0';
	return (rtn);
}
