/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poss <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 16:33:46 by poss              #+#    #+#             */
/*   Updated: 2023/11/22 18:13:23 by poss             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TESTING 1

int		seek_word_beginning(const char *s, char c, int len, int start);
int		seek_word_end(const char *s, char c, int len, int start);

size_t	get_n_words(char const *s, char c, size_t len)
{
	size_t	n;
	int		start;

	n = 0;
	start = seek_word_beginning(s, c, len, 0);
	while (start != -1)
	{
		n++;
		start = seek_word_end(s, c, len, start);
		start = seek_word_beginning(s, c, len, start);
	}
	return (n);
}

int	seek_word_beginning(const char *s, char c, int len, int start)
{
	while (s[start] == c && start < len)
	{
		start++;
	}
	if (start == len)
		return (-1);
	else
		return (start);
}

int	seek_word_end(const char *s, char c, int len, int start)
{
	while (s[start] != c && start <= len)
	{
		start++;
	}
	return (start);
}

char	**ft_split(char const *s, char c)
{
	char	**out;
	int		start;
	int		end;
	int		len;
	int		out_index;

	len = ft_strlen(s);
	out = malloc((1 + get_n_words(s, c, len)) * sizeof(char *));
	if (out == NULL)
		return (NULL);
	out_index = 0;
	start = seek_word_beginning(s, c, len, 0);
	while (start != -1)
	{
		end = seek_word_end(s, c, len, start);
		out[out_index] = ft_substr(s, start, end);
		start = seek_word_beginning(s, c, len, end);
		out_index++;
	}
	out[out_index] = NULL;
	return (out);
}
#if TESTING

int	main(void)
{
	char	c;
	char	*s;
	char	**split;

	s = strdup("      hello    world       haha       ");
	c = ' ';
	printf("%zu\n", get_n_words(s, c, strlen(s)));
	split = ft_split(s, c);
	while (*split)
		printf("%s\n", *split++);
	free(s);
}
#endif
