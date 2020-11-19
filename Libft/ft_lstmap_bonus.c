/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynejmi <ynejmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 12:26:42 by ynejmi            #+#    #+#             */
/*   Updated: 2019/10/26 21:33:55 by ynejmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *add;
	t_list *new;

	if (!lst || !f || !del)
		return (NULL);
	new = ft_lstnew(f(lst->content));
	lst = lst->next;
	while (lst)
	{
		if (!(add = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, add);
		lst = lst->next;
	}
	return (new);
}
