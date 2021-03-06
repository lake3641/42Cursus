/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungtlee <jungtlee@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/08 17:22:04 by jungtlee          #+#    #+#             */
/*   Updated: 2020/04/08 17:22:05 by jungtlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int size;
	int output;
	int temp;

	temp = n;
	if (n == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	size = 1;
	if (n < 0)
		write(fd, "-", 1);
	while ((n = n / 10) != 0)
		size *= 10;
	while (size != 0)
	{
		output = temp / size;
		if (output < 0)
			output = output * (-1);
		output = 48 + output;
		write(fd, &output, 1);
		temp = temp % size;
		size = size / 10;
	}
}
