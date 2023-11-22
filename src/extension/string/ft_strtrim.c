/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poss <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:28:59 by poss              #+#    #+#             */
/*   Updated: 2023/11/22 15:16:12 by poss             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	get_n_leading_chars(char const *s1, char const *set);
static size_t	get_n_trailing_chars(char const *s1, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	offset;
	size_t	len;
	char	*out;

	offset = get_n_leading_chars(s1, set);
	if (offset == ft_strlen(s1))
		return (ft_strdup(""));
	len = ft_strlen(s1) - offset - get_n_trailing_chars(s1, set);
	out = malloc(1 + len);
	if (!out)
		return (NULL);
	ft_strlcpy(out, s1 + offset, 1 + len);
	return (out);
}

static size_t	get_n_leading_chars(char const *s1, char const *set)
{
	size_t	i;

	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]) != NULL)
	{
		i++;
	}
	return (i);
}

static size_t	get_n_trailing_chars(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(s1);
	i = 0;
	while (i < len && ft_strchr(set, s1[len - 1 - i]) != NULL)
	{
		i++;
	}
	return (i);
}