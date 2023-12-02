/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlafouas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:57:50 by vlafouas          #+#    #+#             */
/*   Updated: 2023/12/02 15:44:57 by vlafouas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isupper(int c);

int	ft_tolower(int c)
{
	if (!ft_isupper(c))
		return (c);
	return (c + 32);
}

static int	ft_isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}
