/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungtlee <jungtlee@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/08 17:23:06 by jungtlee          #+#    #+#             */
/*   Updated: 2020/04/08 21:36:22 by jungtlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	size;
	char			*rtn;

	if (s == 0)
		return (0);
	size = ft_strlen(s);
	if ((rtn = (char *)malloc(sizeof(char) * (size + 1))) == 0)
		return (0);
	i = 0;
	while (s[i] != '\0')
	{
		rtn[i] = f(i, s[i]);
		i++;
	}
	rtn[i] = '\0';
	return (rtn);
}
