/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarron <qbarron@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 16:13:29 by qbarron           #+#    #+#             */
/*   Updated: 2023/09/24 00:35:08 by qbarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}


char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	if (c == '\0')
	{
		return ((char *)&str[ft_strlen(str)]);
	}
	if (c != '\0')
	{
		while (str[i] != '\0')
		{
			if (str[i] == c)
			{
				return ((char *)&str[i]);
			}
			i++;
		}
	}
	return (NULL);
}
