/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarron <qbarron@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 13:01:02 by qbarron           #+#    #+#             */
/*   Updated: 2023/10/15 13:16:48 by qbarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *next;

	if ((*lst) == NULL || del == NULL)
		return ;
	while(*lst)
	{
		next = (*lst)->content;
		del((*lst)->content);
		free(*lst);
		*lst = next;
	}
	(*lst) = NULL;
}