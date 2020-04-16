/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungtlee <jungtlee@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/16 11:19:06 by jungtlee          #+#    #+#             */
/*   Updated: 2020/04/16 11:24:42 by jungtlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

# define FDS 500

typedef	struct	s_store
{
	char		line[BUFFER_SIZE];
	int			size;
}				t_store;

int				get_next_line(int fd, char **line);
char			*ft_memdup(char *src, int size);
int				ft_find(char *str, char to_find, int len);
char			*ft_memmove(char *dst, const char *src, size_t n);
char			*ft_realloc(char *src, char *nst, int *sl, int nl);

#endif
