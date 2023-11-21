/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poss <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 22:04:52 by poss              #+#    #+#             */
/*   Updated: 2023/11/21 22:18:06 by poss             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	t_byte	*dest_bytes;
	t_byte	*src_bytes;

	dest_bytes = (t_byte *)dest;
	src_bytes = (t_byte *)src;
	while (n)
	{
		*dest_bytes = *src_bytes;
		if (*dest_bytes == c)
		{
			return (dest_bytes + 1);
		}
		n--;
		dest_bytes++;
		src_bytes++;
	}
	return (NULL);
}
