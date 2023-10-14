/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarron <qbarron@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 07:19:44 by qbarron           #+#    #+#             */
/*   Updated: 2023/10/14 12:18:26 by qbarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_word_count(const char *str, char c)
{
	int	i;
	int	count;

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
		else
			i++;
	}
	return (count);
}

int	ft_word_len(const char *str, char c, int j)
{
	int	i;

	i = 0;
	while (str[i + j] != '\0' && str[i + j] != c)
		i++;
	return (i);
}

char	**ft_split(const char *s, char c)
{
	int		i;
	int		j;
	int		wcnt;
	int		wlen;
	char	**spl;

	i = 0;
	j = -1;
	wcnt = ft_word_count(s, c);
	spl = (char **)malloc(sizeof(char *) * (wcnt + 1));
	if (spl == NULL)
		return (NULL);
	while (++j < wcnt)
	{
		while (s[i] == c)
			i++;
		wlen = ft_word_len(s, c, i);
		spl[j] = ft_substr(s, i, wlen);
		if (spl[j] == NULL)
			return (NULL);
		i += wlen;
	}
	spl[j] = NULL;
	return (spl);
}
