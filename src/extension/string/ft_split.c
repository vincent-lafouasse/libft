/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poss <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 16:33:46 by poss              #+#    #+#             */
/*   Updated: 2023/11/22 17:15:06 by poss             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdbool.h>
#include <stdlib.h>

#define WAITING_NEW_WORD -1

size_t	get_n_words(char const *s, char c)
{
	size_t	n;
	bool	is_new_word;

	n = 0;
	is_new_word = true;
	while (*s)
	{
		if (is_new_word && *s != c)
		{
			n++;
			is_new_word = false;
		}
		if (!is_new_word && *s == c)
		{
			is_new_word = true;
		}
		s++;
	}
	return (n);
}

char	**ft_split(char const *s, char c)
{
	char	**out;
	int		start;
	int		len;
	int		s_index;
	int		out_index;

	out = malloc((1 + get_n_words(s, c)) * sizeof(char *));
	if (!out)
		return (NULL);
	s_index = 0;
	out_index = 0;
	len = ft_strlen(s);
	start = WAITING_NEW_WORD;
	while (s_index <= len)
	{
		if (start == WAITING_NEW_WORD && s[s_index] != c)
			start = s_index;
		if (start != WAITING_NEW_WORD && (s[s_index] == c || s_index == len))
		{
			out[out_index] = ft_substr(s, start, s_index - start);
			out_index++;
			start = WAITING_NEW_WORD;
		}
		s_index++;
	}
	out[out_index] = NULL;
	return (out);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	c;
	char	*s;
	char	**abc;

	s = strdup("hello world       haha       ");
	c = ' ';
	printf("%zu\n", get_n_words(s, c));
	abc = ft_split(s, c);
	while (*abc)
	{
		printf("%s\n", *abc);
		abc++;
	}
}
