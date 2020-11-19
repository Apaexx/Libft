/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynejmi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 15:47:10 by ynejmi            #+#    #+#             */
/*   Updated: 2019/10/15 22:50:28 by ynejmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;
	char	*s;

	i = 0;
	s = (char *)str;
	if (to_find[i] == 0)
		return (s);
	while (s[i] && i < len)
	{
		j = 0;
		if (to_find[j++] == s[i])
		{
			while (s[i + j] && to_find[j] && s[i + j] == to_find[j])
				j++;
			if (!to_find[j] && (i + j) <= len)
				return (s + i);
		}
		i++;
	}
	return (0);
}
