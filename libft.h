/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarron <qbarron@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 17:27:06 by qbarron           #+#    #+#             */
/*   Updated: 2023/10/05 20:13:46 by qbarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _LIBFT_H_
# define _LIBFT_H_
# include <stddef.h>


/////////////////////// INT


//ft_isalnum
int	ft_isalnum(int c);
//ft_isalpha
int	ft_isalpha(int c);
//ft_isdigit
int	ft_isdigit(int c);
//fttolower
int	ft_tolower(int c);
//ft_isprint
int	ft_isprint(int c);
//ft_toupper
int	ft_toupper(int c);
//ft_isascii
int	ft_isascii(int c);
//ft_atoi
int	ft_atoi(const char *str);
//ft_strlen
int	ft_strlen(const char *str);
//ft_strncmp
int	ft_strncmp(const char *s1, const char *s2, size_t n);
//ft_strnstr
int	*ft_strstr(const char *str, const char *to_find);
//ft_memcmp
int	ft_memcmp(const void *s1, const void *s2, size_t n);


///////////////////// CHAR   

//ft_strchr
char	*ft_strchr(const char *str, int c);
//ft_strrchr
char	*ft_strrchr(const char *str, int c);
//ft_strdup
char	*ft_strdup(const char *str);
//ft_strnstr
char	*ft_strnstr(const char *str, const char *to_find, size_t n);


////////////////////// SIZE_T

//ft_strlcat
size_t	ft_strlcat(char *dest, const char *src, size_t size);  
//ft_strlcpy           
size_t	ft_strlcpy(char *dest, const char *src, size_t destsize);

////////////////////// VOID 

//ft_memset
void	*ft_memset(void *b, int c, size_t len);
//ft_bzero
void	*ft_bzero(void *b, size_t len);
//ft_memcpy
void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t len);
//ft_memmove
void	*ft_memmove(void *dst, const void *src, size_t len);
//ft_calloc
void	*ft_calloc(size_t count, size_t size);
//ft_memchr
void	*ft_memchr(const void *s, int c, size_t n);
//ft_putchar_fd
void	ft_putchar_fd(char c, int fd);
//ft_putstr_fd
void	ft_putstr_fd(char *s, int fd);
//ft_putnbr_fd
void	ft_putnbr_fd(int n, int fd);

#endif