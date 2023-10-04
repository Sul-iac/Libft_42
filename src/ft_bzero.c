/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarron <qbarron@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 20:26:28 by qbarron           #+#    #+#             */
/*   Updated: 2023/10/04 00:04:01 by qbarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_bzero(void *b, size_t len)
{
	unsigned int	i;
	unsigned char	*bytes;

	bytes = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		bytes[i] = 0;
		i++;
	}
	return (b);
}
