/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_atoi.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlafouas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:03:16 by vlafouas          #+#    #+#             */
/*   Updated: 2023/11/07 12:06:05 by vlafouas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <gtest/gtest.h>

#include <stdlib.h>

extern "C"
{
#include "libft.h"
};

void test_atoi(const char* s)
{
	EXPECT_EQ(ft_atoi(s), atoi(s));
}

TEST(Stdlib, Atoi)
{
	test_atoi("0");
	test_atoi("1");
}
