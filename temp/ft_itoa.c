/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungtlee <jungtlee@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/08 17:20:23 by jungtlee          #+#    #+#             */
/*   Updated: 2020/04/08 17:20:24 by jungtlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int			cnt;
	char		*rtn;
	long long	temp;

	temp = n;
	if ((cnt = 1) == 1 && temp < 0)
		cnt++;
	if (temp < 0)
		temp *= -1;
	while ((temp = temp / 10) > 0)
		cnt++;
	if ((rtn = (char *)malloc(sizeof(char) * (cnt + 1))) == 0)
		return (0);
	temp = (long long)n * 10;
	if (temp < 0)
	{
		rtn[0] = '-';
		temp *= -1;
	}
	rtn[cnt--] = '\0';
	if (temp == 0)
		rtn[cnt] = '0';
	while ((temp = temp / 10) > 0)
		rtn[cnt--] = temp % 10 + '0';
	return (rtn);
}
