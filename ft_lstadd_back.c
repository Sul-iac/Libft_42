/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarron <qbarron@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 12:16:07 by qbarron           #+#    #+#             */
/*   Updated: 2023/10/15 12:39:44 by qbarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list new)
{
	t_list	*temp;

	if (lst)
	{
		if (lst == NULL)
			*lst = new;
		else
		{
			temp = ft_lstlast(*(lst)); //un peu comme un swap: on va au bout 
			temp->next = new;			//de la liste et on dit que la prochaine node de list est new
		}
	}
}