/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynejmi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 20:14:05 by ynejmi            #+#    #+#             */
/*   Updated: 2019/10/16 12:42:51 by ynejmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*d;

	i = -1;
	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	while (++i < n)
	{
		d[i] = s[i];
		if (s[i] == (unsigned char)c)
			return (&d[i + 1]);
	}
	return (NULL);
}
