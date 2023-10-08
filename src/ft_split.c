/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarron <qbarron@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 07:19:44 by qbarron           #+#    #+#             */
/*   Updated: 2023/10/07 22:42:54 by qbarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

int		ft_word_count(const char *str, char c)
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
				i++;
	}
	return (count);
}

int		ft_word_len(const char *str, char c, int j)
{
	int		i;

	i = 0;
	while (str[i + j] != '\0' && str[i + j] != c)
		i++;
	return (i);
}

char	**ft_split(const char *s, char c)
{
	int		i;
	int		j;
	int		k;
	int		wcnt;
	int 	wlen;
	char	**spl;

	i = 0;
	j = 0;
	wcnt = ft_word_count(s, c);
	spl = (char **)malloc(sizeof(char *) * (wcnt + 1));
	if (spl == NULL || s == NULL)
		return (NULL);
	while (j < wcnt)
	{
		while(s[i] == c)
			i++;
		wlen = ft_word_len(s, c, i);
		spl[j] = (char *)malloc(sizeof(char) * (wlen+ 1));
		if(spl[j] == NULL)
			return (NULL);
		k = 0;
		while (s[i] != '\0' && s[i] != c)
		{
			spl[j][k] = s[i];
			i++;
			k++;
		}
		spl[j][k] = '\0';
		j++;
	}
	spl[j] = NULL;
	return (spl);
}
