/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poss <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:14:45 by poss              #+#    #+#             */
/*   Updated: 2023/12/01 17:17:36 by poss             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	min(size_t a, size_t b);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*out;

	if (start >= ft_strlen(s))
	{
		out = malloc(1);
		if (!out)
			return (NULL);
		*out = '\0';
		return (out);
	}
	len = min(len, ft_strlen(s + start));
	out = malloc(1 + len);
	if (!out)
		return (NULL);
	ft_strlcpy(out, s + start, 1 + len);
	return (out);
}

static size_t	min(size_t a, size_t b)
{
	if (a < b)
		return (a);
	return (b);
}
