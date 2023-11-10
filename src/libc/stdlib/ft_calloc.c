/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlafouas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:12:21 by vlafouas          #+#    #+#             */
/*   Updated: 2023/11/10 14:16:56 by poss             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	n_bytes;
	t_byte	*output;

	n_bytes = nmemb * size;
	output = malloc(n_bytes);
	if (output == NULL)
		return (NULL);
	ft_bzero(output, n_bytes);
	return (output);
}
