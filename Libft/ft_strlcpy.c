/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynejmi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 17:42:14 by ynejmi            #+#    #+#             */
/*   Updated: 2019/10/10 19:02:00 by ynejmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	unsigned int	i;
	size_t			l;
	char			*s;

	l = ft_strlen(src);
	i = 0;
	s = (char *)src;
	if (!n)
		return (l);
	while (s[i] && i + 1 < n)
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (l);
}
