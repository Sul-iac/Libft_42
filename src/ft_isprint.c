/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarron <qbarron@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 21:29:27 by qbarron           #+#    #+#             */
/*   Updated: 2023/09/23 20:46:33 by qbarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isprint(int c)
{
	if (!((0 <= c && c <= 31) || (c == 127)))
		return (1);
	return (0);
}