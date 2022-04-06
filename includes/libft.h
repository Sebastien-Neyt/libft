/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sneyt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 13:25:21 by sneyt             #+#    #+#             */
/*   Updated: 2022/04/05 16:57:33 by sneyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

//		Basic protoypes

int		ft_isdigit(int a);
int		ft_atoi(char *str);
int		ft_isalnum(int a);
int		ft_isaplha(int c);
int		ft_isascii(int c);
int		ft_isprint(int a);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_strncmp(char *s1, char *s2, size_t a);
size_t	ft_strlen(char *str);
size_t	ft_strlcat(char *dst, char *src, size_t dstsize);
size_t	ft_strlcpy(char *dst, char *src, size_t maxlen);
char	*ft_strchr(char *p, int ch);
char	*ft_strdup(char *s1);
char	*ft_strrchr(char *s, int c);
char	*ft_strnstr(char *haystack, char *needle, size_t len);

//		Memory prototypes

void	*ft_memcpy(void *dest, void *src, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memchr(void *s, int c, size_t n);
void	*ft_memmove(void *dst, void *src, size_t len);
void	*ft_memset(void *b, int c, size_t len);
int		ft_memcmp(const void *ptr1, const void *ptr2, size_t a);

void	*ft_calloc(size_t n, size_t size);

//		Fd prototypes

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

//		Advanced prototypes

char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
#endif
