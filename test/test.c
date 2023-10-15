/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarron <qbarron@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 17:46:06 by qbarron           #+#    #+#             */
/*   Updated: 2023/10/14 16:14:18 by qbarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h> 
#include <stdlib.h>
#include <ctype.h>

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
/*int main(void)
{
    char str[] = "FULL BULLSHIT";
    int start = 400;
    int len = 20;
    char *res = ft_substr(str, start, len);
    printf("%s", res);
}*/
/////////////////////ft_lstnew
/*int main(void)
{
    int *q;
    q = malloc(sizeof(int));
    *q = 42;
    t_list *res;

    res = ft_lstnew(q);
    printf("%d", *((int *)res->content));
}*/
////////////////////itoa

/*int main(void)
{
    int c = -12345;
    printf("%s", ft_itoa(c));
}*/

///////////////////ft_isprint
/*int main(void)
{
    int i;

    i = -1;
    while (i < 530)
    if (!!ft_isprint(i) != !!isprint(i))
 	{ 
       	{
 			exit(0);
 		}
 		i++;
 	}
 	exit(1);
}*/

/*int main(void)
{
    char *str = "Bonjour";
    char *str1 = " ca va?";
    char *res = ft_strtrim(str, str1);
    printf("%s", res);
}*/

/*int main(void) 
{
    t_list *head = NULL;
    t_list *new = (t_list *)malloc(sizeof(t_list));
    new->content = "Bonjour comment ca va ?";
    new->next = NULL;
    ft_lstadd_front(&head, new);

    printf("%s\n", (char *)head->content);

    free(new);
    return 0;
}*/

int main(void)
{
    t_list *head = NULL;
    t_list *milieu = NULL;
    t_list *avant_dernier = NULL;
    t_list *fin = NULL;
    int a = 42;
    int b = 41;
    int size;

    head = (t_list *)malloc(sizeof(t_list));
    milieu = (t_list *)malloc(sizeof(t_list));

    head->content = (void *)&a;
    head->next = milieu;

    milieu->content = (void *)&b;
    milieu->next = NULL;

    size = ft_lstlast(head);
    printf("%d\n", size);
}