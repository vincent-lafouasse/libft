/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poss <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 18:24:46 by poss              #+#    #+#             */
/*   Updated: 2023/11/21 20:05:23 by poss             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;
	size_t	i;

	needle_len = ft_strlen(needle);
	i = 0;
	while (i < len)
	{
		if (!ft_memcmp(haystack + i, needle, needle_len))
		{
			return ((char *)(haystack + i));
		}
		i++;
	}
	return (0);
}
