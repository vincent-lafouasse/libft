/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlafouas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:12:21 by vlafouas          #+#    #+#             */
/*   Updated: 2023/11/07 14:58:36 by vlafouas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	n_bytes;
	t_byte	*output;
	size_t	i;

	n_bytes = nmemb * size;
	output = malloc(n_bytes);
	i = 0;
	while (i < n_bytes)
	{
		output[i] = 0;
		i++;
	}
	return ((void *)output);
}
