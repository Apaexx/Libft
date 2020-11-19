/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynejmi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 18:33:54 by ynejmi            #+#    #+#             */
/*   Updated: 2019/10/23 18:33:57 by ynejmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*ret;

	i = 0;
	if (!s)
		return (0);
	if (start > ft_strlen(s))
		len = 0;
	if (!(ret = (char*)malloc(len + 1)))
		return (0);
	while (s[start] && i < (int)len)
		ret[i++] = s[start++];
	ret[i] = '\0';
	return (ret);
}
