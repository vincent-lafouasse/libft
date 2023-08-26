/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poss <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 15:36:41 by poss              #+#    #+#             */
/*   Updated: 2023/08/26 15:51:02 by poss             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* from `stdlib.h` */
int		atoi(const char *nptr);

/* from `stdlib.h` */
int		isalpha(int);
int		isdigit(int);
int		isalnum(int);
int		toascii(int);
int		isprint(int);
int		tolower(int);
int		toupper(int);

/* from `string.h` */
void	*memset(void *, int, size_t);
void	*memcpy(void *dest, const void *src, size_t n);
void	*memmove(void *dest, const void *src, size_t n);
void	*memchr(const void *s, int c, size_t n);
int		memcmp(const void *s1, const void *s2, size_t n);
char	*strcat(char *dest, const char *src);
char	*strncat(char *dest, const char *src, size_t n);
char	*strchr(const char *, int);
char	*strrchr(const char *, int);
int		strcmp(const char *, const char *);
int		strncmp(const char *, const char *, size_t n);
char	*strcpy(char *toHere, const char *fromHere);
char	*strncpy(char *toHere, const char *fromHere, size_t n);
size_t	strlen(const char *);
char	*strstr(const char *haystack, const char *needle);
char	*strdup(const char *);
void	*memccpy(void *dest, const void *src, int c, size_t n);
char	*strnstr(const char *big, const char *little, size_t len);

/* from `strings.h` */
void	bzero(void *s, size_t n);

/* from `bsd/string.h` */
size_t	strlcat(char *dst, const char *src, size_t size);
