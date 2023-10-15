/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarron <qbarron@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 13:01:02 by qbarron           #+#    #+#             */
/*   Updated: 2023/10/15 14:13:21 by qbarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*next;
	t_list	*current;

	current = *lst;
	if (!lst || !del)
		return ;
	while (current)
	{
		next = current->next;
		del(current->content);
		free(current);
		current = next;
	}
	(*lst) = NULL;
}
