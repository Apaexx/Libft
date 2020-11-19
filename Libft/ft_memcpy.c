/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynejmi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 13:05:48 by ynejmi            #+#    #+#             */
/*   Updated: 2019/10/16 12:41:30 by ynejmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char			*pdst;
	const char		*psrc;
	unsigned int	i;

	i = 0;
	pdst = (char*)dst;
	psrc = (const char*)src;
	if (!(dst || src))
		return ((char*)NULL);
	while (i < (unsigned int)n)
	{
		pdst[i] = psrc[i];
		i++;
	}
	return ((char*)dst);
}
