/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynejmi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 18:53:48 by ynejmi            #+#    #+#             */
/*   Updated: 2019/10/19 19:24:20 by ynejmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	unsigned int	i;
	unsigned int	l;
	char			*s;

	s = (char *)src;
	l = 0;
	while (dest[l])
		l++;
	i = 0;
	while (i + l + 1 < n && s[i] != '\0')
	{
		dest[l + i] = s[i];
		i++;
	}
	dest[l + i] = '\0';
	i = 0;
	while (s[i])
		i++;
	if (n == 0)
		return (i);
	if (l < n)
		return (l + i);
	else
		return (n + i);
}
