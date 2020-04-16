/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungtlee <jungtlee@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/16 11:19:39 by jungtlee          #+#    #+#             */
/*   Updated: 2020/04/16 19:04:58 by jungtlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	my_get_line(int fd, t_store *store, char **out, int temp)
{
	char	buf[BUFFER_SIZE];
	int		rtn;
	int		len;

	len = store->size;
	if ((*out = ft_memdup(store->line, store->size)) == 0)
		return (-1);
	while ((rtn = read(fd, buf, BUFFER_SIZE)) > 0)
	{
		if ((temp = ft_find(buf, '\n', rtn)) != -1)
		{
			if ((*out = ft_realloc(*out, buf, &len, temp)) == 0)
				return (-1);
			ft_memmove(store->line, buf + temp + 1, rtn - temp - 1);
			store->size = rtn - temp - 1;
			break ;
		}
		else if ((*out = ft_realloc(*out, buf, &len, rtn)) == 0)
			return (-1);
	}
	if (rtn == 0 && len > 0)
		store->size = 0;
	return (rtn);
}

int	get_next_line(int fd, char **line)
{
	static t_store	st[FDS + 1];
	int				i;

	if (fd < 0 || line == 0 || BUFFER_SIZE <= 0)
		return (-1);
	if ((i = ft_find(st[fd].line, '\n', st[fd].size)) != -1)
	{
		if ((*line = ft_memdup(st[fd].line, i)) == 0)
			return (-1);
		ft_memmove(st[fd].line, st[fd].line + i + 1, st[fd].size - i - 1);
		st[fd].size -= (i + 1);
		return (1);
	}
	if ((i = my_get_line(fd, &st[fd], line, -2)) > 0)
		i = 1;
	return (i);
}
