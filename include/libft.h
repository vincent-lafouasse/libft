/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poss <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 15:36:41 by poss              #+#    #+#             */
/*   Updated: 2024/03/30 10:06:32 by poss             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include "libft/types.h"
# include "libft/string.h"
# include "libft/ctype.h"
# include "libft/t_list.h"

/* ----- from `stdlib.h` ---------------------------------------------------- */
int		ft_atoi(const char *num_str);
void	*ft_calloc(size_t nmemb, size_t size);

/* ----- string extension --------------------------------------------------- */
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));

/* ----- I/O extension ------------------------------------------------------ */
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(const char *s, int fd);
void	ft_putendl_fd(const char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

void	ft_putchar(char c);
void	ft_putstr(const char *s);
void	ft_putendl(const char *s);
void	ft_putnbr(int n);

#endif /* LIBFT_H */
