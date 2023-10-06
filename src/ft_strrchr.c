/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarron <qbarron@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 00:35:47 by qbarron           #+#    #+#             */
/*   Updated: 2023/10/06 17:51:48 by qbarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "libft.h"

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
