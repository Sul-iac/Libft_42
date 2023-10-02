/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarron <qbarron@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 21:30:47 by qbarron           #+#    #+#             */
/*   Updated: 2023/10/01 23:40:59 by qbarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t len)
{
	unsigned int i;
	unsigned char	*byte_dst;
	unsigned char	*byte_src;

	byte_dst = (unsigned char *)dst;
	byte_src = (unsigned char *)src;
	i = 0;
	while (i < len)
	{
		byte_dst[i] = byte_src[i];
		i++;
	}
	return (dst);
}

/*int main(void)
{
	int i;
	unsigned char src[] = "110001100 00111101";
	unsigned char dst[20];
	int n = 6;
	ft_memcpy(dst, src, n);
	printf("%s\n", dst);
	printf("%s", src);
}*/