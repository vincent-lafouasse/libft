/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlafouas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 17:38:57 by vlafouas          #+#    #+#             */
/*   Updated: 2023/11/11 18:33:27 by vlafouas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*out;
	int		i;
	size_t	len;

	len = ft_strlen(s);
	i = 0;
	out = malloc(1 + len);
	if (!out)
		return (NULL);
	ft_memcpy(out, s, 1 + len);
	return (out);
}
