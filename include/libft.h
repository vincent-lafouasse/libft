/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poss <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 15:36:41 by poss              #+#    #+#             */
/*   Updated: 2023/11/09 14:34:42 by poss             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

/* only for the declarations of `size_t` and `NULL` */
# include <stddef.h>

typedef unsigned char	t_byte;

/* ----- from `stdlib.h` ---------------------------------------------------- */
int						ft_atoi(const char *num_str);
void					*ft_calloc(size_t nmemb, size_t size);

/* ----- from `string.h` ---------------------------------------------------- */
void					*ft_memset(void *s, int c, size_t n);
size_t					ft_strlen(const char *s);
char					*ft_strchr(const char *s, int c);
char					*ft_strrchr(const char *s, int c);

/* ----- from `strings.h` --------------------------------------------------- */
void					ft_bzero(void *s, size_t n);

/* ----- character types (`ctype.h`) ---------------------------------------- */
int						ft_isalpha(int c);
int						ft_isdigit(int c);
int						ft_isalnum(int c);
int						ft_isascii(int c);
int						ft_isprint(int c);
int						ft_toupper(int c);
int						ft_tolower(int c);

int						ft_isupper(int c);
int						ft_islower(int c);
int						ft_isspace(int c);

/* ----- I/O ---------------------------------------------------------------- */
void					ft_putchar_fd(char c, int fd);
void					ft_putstr_fd(const char *s, int fd);
void					ft_putendl_fd(const char *s, int fd);
void					ft_putnbr_fd(int n, int fd);

void					ft_putchar(char c);
void					ft_putstr(const char *s);
void					ft_putendl(const char *s);
void					ft_putnbr(int n);

#endif /* LIBFT_H */