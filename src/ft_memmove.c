/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarron <qbarron@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 18:01:04 by qbarron           #+#    #+#             */
/*   Updated: 2023/10/03 18:05:10 by qbarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*a;
	unsigned char	*b;
	unsigned int	i;

	a = dst;
	b = src;
	i = 0;
	if (a < b)
	{
		while (i < len)
			a[i] = b[i];
			i++;
	}
	else
	{
		while (i < len)
			a[len] = b[len];
			i++;
	}
	return (dst);
}

