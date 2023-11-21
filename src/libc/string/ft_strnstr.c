/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poss <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 18:24:46 by poss              #+#    #+#             */
/*   Updated: 2023/11/21 19:28:13 by poss             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	last_index;
	size_t	i;

	last_index = ft_strlen(haystack) - len;
	i = 0;
	while (i < last_index)
	{
		if (!ft_memcmp(haystack + i, needle, 1 + ft_strlen(needle)))
		{
			return ((char *)(haystack + i));
		}
		i++;
	}
	return (0);
}
