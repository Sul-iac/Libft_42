/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarron <qbarron@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 07:19:44 by qbarron           #+#    #+#             */
/*   Updated: 2023/10/05 19:31:49 by qbarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../libft.h"

int		count_word(const char *str, char c)
{
	int		i;
	int 	count;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c)
		{
			count++;
			while (str[i] != '\0' && str[i] != c)
				i++;
		}
		else if (str[i] == c)
		{
				i++;
		}
	}
	return (count);
}

int		word_len(const char *s, char c)
{
	int		i;
	
	i = 0;
	while(s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}

char	**ft_split(const char *s, char c)
{
	unsigned int	i;
	char			**spl;
	char			*new_spl;
	i = 0;
	spl = (char **)malloc(sizeof(char *) * count_word + 1);
	if (spl == NULL || s == NULL)
		return (NULL);
	while (s[i] != '\0' && s[i] != c)
	{
		new_spl = (char *)malloc(sizeof(char) * word_len(s, c) + 1);
		i++;
	}
	new_spl = '\0';
	

}