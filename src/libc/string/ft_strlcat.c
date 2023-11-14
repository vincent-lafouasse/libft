/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poss <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:11:11 by poss              #+#    #+#             */
/*   Updated: 2023/11/14 17:22:21 by poss             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t min(size_t, size_t);

size_t	ft_strlcat(char *dst, const char *src, size_t buffer_size)
{
	size_t src_len = ft_strlen(src);
	size_t dst_len = min(buffer_size, ft_strlen(dst));

	if (dst_len == buffer_size)
	{
		return buffer_size + src_len;
	}
	if (buffer_size > dst_len + src_len)
	{
		ft_memcpy(dst + dst_len, src, 1 + src_len);
	}
	else
	{
		
	}
	return dst_len + src_len;
}

static size_t min(size_t a, size_t b)
{
	if (a < b)
	return a;
	else
	return b;
}
