/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungtlee <jungtlee@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/08 16:14:04 by jungtlee          #+#    #+#             */
/*   Updated: 2020/04/08 16:14:06 by jungtlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int		minus;
	int		rtn;
	int		i;

	i = 0;
	minus = 1;
	rtn = 0;
	while (nptr[i] == ' ' || (nptr[i] <= 13 && nptr[i] >= 9))
		i++;
	if (nptr[i] == '-')
		minus = -1;
	if (nptr[i] == '-' || nptr[i] == '+')
		i++;
	while (nptr[i] > 47 && nptr[i] < 58)
	{
		rtn *= 10;
		rtn += (nptr[i] - 48);
		i++;
	}
	rtn *= minus;
	return (rtn);
}
