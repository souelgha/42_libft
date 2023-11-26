/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 11:29:04 by sonouelg          #+#    #+#             */
/*   Updated: 2023/11/26 11:59:42 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newelem;
	t_list	*ptr;
	t_list	*tete;

	if (!lst || !f || !del)
		return (NULL);
	tete = ft_lstnew(f(lst->content));
	ptr = tete;
	while (lst != NULL)
	{
		newelem = (t_list *)malloc(sizeof(t_list));
		if (newelem == NULL)
		{
			return (NULL);
			del(newelem->content);
			free(newelem);
		}		
		newelem->content = (*f)(lst->content);
		newelem->next = NULL;
		ptr->next = newelem;
		ptr = newelem;
		lst = lst->next;
	}
	ptr = tete;
	return (ptr);
}
