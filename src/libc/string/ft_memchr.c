/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poss <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 13:46:04 by poss              #+#    #+#             */
/*   Updated: 2023/11/20 21:41:04 by poss             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	const t_byte	*bytes;

	i = 0;
	bytes = s;
	while (i < n)
	{
		if (bytes[i] == (t_byte)c)
		{
			return ((void *)(bytes + i));
		}
		i++;
	}
	return (NULL);
}
