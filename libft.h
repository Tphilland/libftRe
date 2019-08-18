/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphillan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 12:45:15 by tphillan          #+#    #+#             */
/*   Updated: 2019/07/20 00:51:47 by tphillan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <stddef.h>
#include <ctype.h>

size_t	ft_strlen(const char *s);
size_t	ft_strnlen(const char *s, size_t maxlen);
void	ft_bzero(void *s, size_t n);
void	*ft_memccpy(void *dst, const void *src,int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset(void *b, int c, size_t len);
char	*ft_strcat(char *restrict s1, const char *restrict s2);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strdup(const char *s1);
char	*ft_strncpy(char *dst, const char *src, size_t len);
void	ft_putchar(char c);
int     ft_isalpha(int c);
int     ft_isalnum(int c);
int     ft_isdigit(int c);
int     ft_isupper(int c);
int     ft_islower(int c);
int     ft_toupper(int c);
int     ft_tolower(int c);
int     ft_isascii(int c);
int     ft_isprint(int c);
char *ft_strchr(const char *s, int c);
void    ft_strclr(char *s);
void    ft_putendl(char const *s);
void    ft_putendl_fd(char const *s, int fd);
#endif

