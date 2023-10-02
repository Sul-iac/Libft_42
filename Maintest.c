/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Maintest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarron <qbarron@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 15:18:21 by qbarron           #+#    #+#             */
/*   Updated: 2023/09/22 18:47:20 by qbarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
	const char str[] = "J'aime les cookies";
	const char to_find[] = "les";
	printf("%s\n", ft_strstr(str, to_find));
	printf("%s", strstr(str, to_find));
}
