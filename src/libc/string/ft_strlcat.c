/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poss <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:11:11 by poss              #+#    #+#             */
/*   Updated: 2023/11/14 17:07:12 by poss             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t buffer_size)
{
	size_t	i;

	i = ft_strlen(dst);
	if (i >= buffer_size)
	{
		return (i + buffer_size);
	}
	while (i < buffer_size - 1 && *src)
	{
		dst[i] = *src;
		src++;
		i++;
	}
	dst[i] = 0;
	return (ft_strlen(src) + i);
}
