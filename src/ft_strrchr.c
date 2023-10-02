/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarron <qbarron@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 00:35:47 by qbarron           #+#    #+#             */
/*   Updated: 2023/09/24 13:28:48 by qbarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strlen(const char *str)
{
	int 	i;
	
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char *ft_strrchr(const char *str, int c)
{	 
	int	i;
	i = ft_strlen(str);
	while (i >= 0) 
	{
      	if (str[i] == c) 
			{
            return ((char *)&str[i]);
   		}
      	i--;
   }
   return NULL;
}
