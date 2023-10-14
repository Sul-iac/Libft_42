/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarron <qbarron@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 23:53:10 by qbarron           #+#    #+#             */
/*   Updated: 2023/10/12 16:46:01 by qbarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	len = ft_strlen(src);
	if (size == 0)
		return (len);
	if (size > 0)
	{
		while (dest[i] != '\0' && i < size)
			i++;
		while (src[j] != '\0' && (i + j + 1) < size)
		{
			dest[i + j] = src[j];
			j++;
		}
		if (i < size)
			dest[i + j] = '\0';
	}
	return (i + len);
}
