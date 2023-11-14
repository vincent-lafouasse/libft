/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poss <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:11:11 by poss              #+#    #+#             */
/*   Updated: 2023/11/14 17:35:57 by poss             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	min(size_t, size_t);

/* an explanation
 *
 * there are 3 cases:
 *
 * - the buffer can't hold dst
 * - the buffer can hold dst but not dst + src
 * - the buffer can hold both
 */

size_t	ft_strlcat(char *dst, const char *src, size_t buffer_size)
{
	size_t	src_len;
	size_t	dst_len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (dst_len > buffer_size)
	{
		return (buffer_size + src_len);
	}
	if (dst_len + src_len < buffer_size)
	{
		ft_memcpy(dst + dst_len, src, 1 + src_len);
	}
	else
	{
		ft_memcpy(dst + dst_len, src, buffer_size - dst_len - 1);
		dst[buffer_size - 1] = '\0';
	}
	return (dst_len + src_len);
}

static size_t	min(size_t a, size_t b)
{
	if (a < b)
		return (a);
	else
		return (b);
}
