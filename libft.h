/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poss <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 15:36:41 by poss              #+#    #+#             */
/*   Updated: 2023/08/26 15:53:18 by poss             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* from `stdlib.h` */
int		ft_atoi(const char *nptr);

/* from `stdlib.h` */
int		ft_isalpha(int);
int		ft_isdigit(int);
int		ft_isalnum(int);
int		ft_toascii(int);
int		ft_isprint(int);
int		ft_tolower(int);
int		ft_toupper(int);

/* from `string.h` */
void	*ft_memset(void *, int, size_t);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strncat(char *dest, const char *src, size_t n);
char	*ft_strchr(const char *, int);
char	*ft_strrchr(const char *, int);
int		ft_strcmp(const char *, const char *);
int		ft_strncmp(const char *, const char *, size_t n);
char	*ft_strcpy(char *toHere, const char *fromHere);
char	*ft_strncpy(char *toHere, const char *fromHere, size_t n);
size_t	ft_strlen(const char *);
char	*ft_strstr(const char *haystack, const char *needle);
char	*ft_strdup(const char *);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t len);

/* from `strings.h` */
void	ft_bzero(void *s, size_t n);

/* from `bsd/string.h` */
size_t	ft_strlcat(char *dst, const char *src, size_t size);
