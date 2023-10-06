/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarron <qbarron@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 17:46:06 by qbarron           #+#    #+#             */
/*   Updated: 2023/10/06 19:25:21 by qbarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h> 
#include <stdlib.h>

int main(void)
{
	const char str[] = "Bonjour j'aimes les cookies";
	const char del[] = "Bonies";
	char *res;
	res = ft_strtrim(str, del);
	printf("%s", res);
	free(res);
} 