/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarron <qbarron@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 18:01:04 by qbarron           #+#    #+#             */
/*   Updated: 2023/10/12 13:12:13 by qbarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*a;
	unsigned char	*b;
	unsigned int	i;

	a = (unsigned char *)dst;
	b = (unsigned char *)src;
	i = -1;
	if (a == b)
		return (dst);
	if (a < b || a > b + len)
	{
		while (++i < len)
			a[i] = b[i];
	}
	else
	{
		i = len + 1;
		while (--i)
			a[i - 1] = b[i - 1];
	}
	return (dst);
}
