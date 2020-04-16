/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungtlee <jungtlee@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/16 11:21:27 by jungtlee          #+#    #+#             */
/*   Updated: 2020/04/16 11:49:53 by jungtlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_memdup(char *src, int size)
{
	char			*rtn;
	int				cnt;

	cnt = 0;
	if ((rtn = (char *)malloc(sizeof(char) * (size + 1))) == 0)
		return (0);
	while (cnt < size)
	{
		rtn[cnt] = src[cnt];
		cnt++;
	}
	rtn[cnt] = '\0';
	return (rtn);
}

int		ft_find(char *str, char to_find, int len)
{
	int		rtn;

	rtn = 0;
	while (rtn < len)
	{
		if (str[rtn] == to_find)
			return (rtn);
		rtn++;
	}
	return (-1);
}

char	*ft_memmove(char *dst, const char *src, size_t n)
{
	char *ret;

	ret = dst;
	if (src < dst)
	{
		src += n;
		dst += n;
		while (n--)
			*--dst = *--src;
	}
	else
		while (n--)
			*dst++ = *src++;
	return (ret);
}

char	*ft_realloc(char *src, char *nst, int *sl, int nl)
{
	char *rtn;

	if ((rtn = (char *)malloc(sizeof(char) * (*sl + nl + 1))) == 0)
	{
		if (*sl > 0)
			free(src);
		return (0);
	}
	ft_memmove(rtn, src, *sl);
	ft_memmove(rtn + *sl, nst, nl);
	rtn[*sl + nl] = '\0';
	*sl = *sl + nl;
	free(src);
	return (rtn);
}
