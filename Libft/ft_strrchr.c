/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynejmi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 22:46:30 by ynejmi            #+#    #+#             */
/*   Updated: 2019/10/11 23:17:05 by ynejmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*s;

	i = 0;
	s = (char *)str;
	while (*s)
	{
		s++;
		i++;
	}
	if (c == 0)
		return (s);
	while (i > 0 && *s != c)
	{
		i--;
		s--;
		if (*s == c)
			return (s);
	}
	return (NULL);
}
