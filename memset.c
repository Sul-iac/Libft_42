/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarron <qbarron@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 10:15:59 by qbarron           #+#    #+#             */
/*   Updated: 2023/10/01 19:36:16 by qbarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	/*
	unsigned int	i;
	unsigned char *bytes;
	
	bytes = (unsigned char *)b;
	i = 0;
	while(i < len)
	{
		bytes[i] = (unsigned char)c;
		i++;
	}
	*/
	return (b);
}

int main(void)
{
	char str[] = "A";
	printf("%s",ft_memset(str, str, sizeof(str)));
}