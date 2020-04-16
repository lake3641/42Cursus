/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungtlee <jungtlee@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/08 17:22:32 by jungtlee          #+#    #+#             */
/*   Updated: 2020/04/08 17:22:34 by jungtlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char		*rtn;
	long long	cnt;

	cnt = 0;
	while (s[cnt] != '\0')
		cnt++;
	if ((rtn = (char *)malloc(sizeof(char) * (cnt + 1))) == 0)
		return (0);
	while (*s != '\0')
	{
		*rtn = *s;
		rtn++;
		s++;
	}
	*rtn = '\0';
	return (rtn - cnt);
}
