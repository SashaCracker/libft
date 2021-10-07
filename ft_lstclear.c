/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 19:52:30 by sgummy            #+#    #+#             */
/*   Updated: 2021/04/29 19:52:33 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*firstnode;

	firstnode = *lst;
	while (firstnode)
	{
		ft_lstdelone(firstnode, del);
		firstnode = firstnode->next;
	}
	*lst = NULL;
}
