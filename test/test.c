/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarron <qbarron@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 17:46:06 by qbarron           #+#    #+#             */
/*   Updated: 2023/10/08 14:17:30 by qbarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h> 
#include <stdlib.h>

////////ft_split main

/*int main(void)
{
	const char str[] = "Bonjour j'aimerais les cookies";
	const char del = ' ';
	char **result = ft_split(str, del);
	 if (result)
    {
        int i = 0;
        while (result[i] != NULL)
        {
            printf("%s\n", result[i]);
            free(result[i]);
            i++;
        }
        free(result);
    }

    return 0;
}*/
/////////////fin split

////////////main ft_striteri

/*void    ft_toupper2(unsigned int i, char *s)
{
    s[0] = ft_toupper(s[0]);
}

int main(void)
{
    char str[] = "Bonjour ca va ?";
    ft_strteri(str, ft_toupper2);
    printf("%s", str);
}*/
///////////fin striteri

//////////main ft_strmapi

/*char    add_one(unsigned int i, char c)
{
    return c + 1;
}

int main(void)
{
    char str[] = "Bonjour ca va ?";
    char *res = ft_strmapi(str, add_one);
    printf ("%s\n", str);
    printf("%s", res);
    free(res);
}*/

////////main ft_substr
int main(void)
{
    char str[] = "FULL BULLSHIT";
    int start = 400;
    int len = 20;
    char *res = ft_substr(str, start, len);
    printf("%s", res);
}