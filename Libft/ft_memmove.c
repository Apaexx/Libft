/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynejmi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 21:01:00 by ynejmi            #+#    #+#             */
/*   Updated: 2019/10/22 21:01:19 by ynejmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;
	int				i;
	int				add;

	if (!dst && !src)
		return (NULL);
	i = 0;
	add = 1;
	d = (unsigned char*)dst;
	s = (unsigned char*)src;
	if (dst == src)
		return (dst);
	if (!len)
		return (dst);
	i = (d > s && d < s + len) ? len - 1 : 0;
	add = (i != 0) ? -1 : 1;
	while (len--)
	{
		d[i] = s[i];
		i += add;
	}
	return (dst);
}
