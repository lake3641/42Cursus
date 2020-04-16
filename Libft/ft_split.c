/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungtlee <jungtlee@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/08 17:22:20 by jungtlee          #+#    #+#             */
/*   Updated: 2020/04/08 21:37:45 by jungtlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	split_freer(char **ptr, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		free(ptr[i]);
		i++;
	}
	free(ptr);
}

static char	**split_allocator(char const *s, char c)
{
	char	**rtn;
	int		flag;
	int		i;
	int		j;

	i = 0;
	j = 0;
	flag = 0;
	while (s[i] != '\0')
	{
		if (flag && s[i] == c)
		{
			flag = 0;
			j++;
		}
		else if (s[i] != c)
			flag = 1;
		i++;
	}
	if (s[i - 1] != c)
		j++;
	if ((rtn = (char**)malloc(sizeof(char *) * (j + 1))) == 0)
		return (0);
	return (rtn);
}

static int	word_size_getter(char const *s, char c)
{
	int	cnt;
	int	flag;
	int	i;

	flag = 0;
	cnt = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			cnt++;
			flag = 1;
		}
		else if (s[i] == c && flag == 1)
			break ;
		i++;
	}
	return (cnt);
}

static char	*word_saver(char const *s, char c, int size, int *idx)
{
	char	*rtn;
	int		cnt;
	int		flag;

	flag = 0;
	cnt = 0;
	if ((rtn = (char *)malloc(sizeof(char) * (size + 1))) == 0)
		return (0);
	while (s[*idx] != '\0')
	{
		if (s[*idx] != c)
		{
			rtn[cnt++] = s[*idx];
			flag = 1;
		}
		else if (s[*idx] == c && flag == 1)
			break ;
		(*idx) = (*idx) + 1;
	}
	rtn[cnt] = '\0';
	return (rtn);
}

char		**ft_split(char const *s, char c)
{
	char	**rtn;
	int		i;
	int		j;

	if (s == 0 || (rtn = split_allocator(s, c)) == 0)
		return (0);
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			if ((rtn[j++] = word_saver(s, c,
							word_size_getter(&s[i], c), &i)) == 0)
			{
				split_freer(rtn, j - 1);
				return (0);
			}
			continue;
		}
		i++;
	}
	rtn[j] = 0;
	return (rtn);
}
