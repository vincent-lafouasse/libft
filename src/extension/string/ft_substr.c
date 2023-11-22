/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poss <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:14:45 by poss              #+#    #+#             */
/*   Updated: 2023/11/22 14:22:01 by poss             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*out;

	out = malloc(1 + len);
	if (!out)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		*out = '\0';
		return (out);
	}
	ft_strlcpy(out, s + start, 1 + len);
	return (out);
}
