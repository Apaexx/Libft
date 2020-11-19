/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynejmi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 15:47:39 by ynejmi            #+#    #+#             */
/*   Updated: 2019/10/10 13:07:30 by ynejmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	int				i;

	if (!len)
		return (b);
	i = -1;
	ptr = b;
	while (len--)
		ptr[++i] = (unsigned char)c;
	return (b);
}
