/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poss <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 18:24:46 by poss              #+#    #+#             */
/*   Updated: 2023/11/21 20:16:10 by poss             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	needle_len;

	needle_len = ft_strlen(needle);
	if (needle_len == 0)
	{
		return ((char *)haystack);
	}
	i = 0;
	while (*haystack && i + needle_len + 1 < len)
	{
		if (!ft_memcmp(haystack, needle, needle_len))
		{
			return ((char *)haystack);
		}
		i++;
		haystack++;
	}
	return (NULL);
}
