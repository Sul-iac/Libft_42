/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarron <qbarron@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 17:39:45 by qbarron           #+#    #+#             */
/*   Updated: 2023/10/06 01:09:09 by qbarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "../libft.h"

int		digits(int n)
{
	size_t	i;

	i = 1;
	if (n < 0)
	{
		i++;
		n *= -1;
	}
	while (n /= 10)
	{
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	int		len;
	char	*dup;

	i = 0;
	len = digits(n);
	if (n == -2147483648)
	{
		return (ft_strdup("-2147483648"));
	}
	if (n == 0)
	{
		return (ft_strdup("0"));
	}
	dup = (char *)malloc(sizeof(char) * len + 1);
	if (dup == NULL)
		return (NULL);
	if (n < 0)
	{
		n *= -1;
		dup[i] = '-';
		i++;
	}
	dup[len] = '\0';
	while (n)
	{
		len--;
		dup[len] = n % 10 + '0';
		n = n / 10;
		i++;
	}
	return (dup);
}

/*int main(void)
{
	int	nb = 0;
	char *str = ft_itoa(nb);

	printf("%s", str);

}*/