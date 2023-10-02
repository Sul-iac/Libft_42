/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarron <qbarron@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 19:37:03 by qbarron           #+#    #+#             */
/*   Updated: 2023/10/01 20:18:59 by qbarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned int	i;
	unsigned char *bytes;
	
	bytes = (unsigned char *)b;
	i = 0;
	while(i < len)
	{
		bytes[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
