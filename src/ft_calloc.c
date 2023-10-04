/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarron <qbarron@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 19:56:17 by qbarron           #+#    #+#             */
/*   Updated: 2023/10/04 10:06:19 by qbarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

void	*ft_bzero(void *b, size_t len)
{
	unsigned char	*bytes;
	unsigned int	i;

	bytes = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		bytes[i] = 0;
		i++;
	}
	return (b);
}

void	*ft_calloc(size_t count, size_t size)
{	
	void	*ptr;
	size_t	len;

	len = count * size;
	ptr = malloc(len);
	if (ptr != NULL)
		ft_bzero(ptr, len);
	return (ptr);
}
