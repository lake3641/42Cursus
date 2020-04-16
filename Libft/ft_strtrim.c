/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungtlee <jungtlee@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/08 17:23:27 by jungtlee          #+#    #+#             */
/*   Updated: 2020/04/08 21:40:06 by jungtlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in(char const *s2, const char c)
{
	int i;

	i = 0;
	while (s2[i] != '\0')
	{
		if (s2[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *s2)
{
	char	*rtn;
	int		i;
	int		size;

	if (s1 == 0 || s2 == 0)
		return (0);
	size = ft_strlen(s1) - 1;
	i = 0;
	while (size >= 0 && is_in(s2, s1[size]))
		size--;
	while (i < size && is_in(s2, s1[i]))
		i++;
	if ((rtn = (char *)malloc(sizeof(char) * (size - i + 2))) == 0)
		return (0);
	ft_strlcpy(rtn, &s1[i], size - i + 2);
	return (rtn);
}
