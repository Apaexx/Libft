/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynejmi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 18:34:08 by ynejmi            #+#    #+#             */
/*   Updated: 2019/10/23 18:34:12 by ynejmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		l1;
	int		l2;
	char	*ret;

	if (!s1)
		return (0);
	l1 = (int)ft_strlen(s1);
	l2 = (int)ft_strlen(s2);
	if (!(ret = (char*)malloc(l1 + l2 + 1)))
		return (0);
	if (s1 != NULL)
		ft_strlcpy(ret, s1, l1 + 1);
	if (s2 != NULL)
		ft_strlcat(ret, s2, l2 + l1 + 1);
	return (ret);
}
