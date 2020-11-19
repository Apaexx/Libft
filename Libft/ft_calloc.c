/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynejmi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 22:17:52 by ynejmi            #+#    #+#             */
/*   Updated: 2019/10/22 22:17:55 by ynejmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ret;

	if (!count || !size)
	{
		count = 1;
		size = 1;
	}
	if (!(ret = malloc(count * size)))
		return (0);
	ft_bzero(ret, size * count);
	return (ret);
}
