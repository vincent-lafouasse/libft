/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlafouas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:36:35 by vlafouas          #+#    #+#             */
/*   Updated: 2023/11/07 13:06:24 by vlafouas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int ft_stripped_to_unsigned(const char* num_str);

int		ft_atoi(const char *num_str)
{
	unsigned int absolute_value;
	char sign;

	absolute_value = 0;
	sign = 1;
	while (ft_isspace(*num_str))
	{
		num_str++;
	}
	if (*num_str == '-')
	{
		sign = -1;
		num_str++;
	}
	return sign * ft_stripped_to_unsigned(num_str);
}

static unsigned int ft_stripped_to_unsigned(const char* num_str)
{
	unsigned int output;

	output = 0;
	while (ft_isdigit(*num_str))
	{
		output = 10 * output + (*num_str - '0');
		num_str++;
	}
	return output;
}
