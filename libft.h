/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poss <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 15:36:41 by poss              #+#    #+#             */
/*   Updated: 2023/09/05 15:04:01 by poss             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* only for the use of `size_t` and `NULL` */
#include <string.h>

/* # string operations ------------------------------------------------------ */
int		ft_atoi(const char *num_str);

/* # character types (`ctype.h`) -------------------------------------------- */
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isspace(int c);
int		ft_toascii(int c);
int		ft_isprint(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);

/* # I/O -------------------------------------------------------------------- */
void	ft_putchar(char c);
void	ft_putstr(const char *s);
void	ft_putchar_fd(char c, int fd);
