/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_atoi.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlafouas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:03:16 by vlafouas          #+#    #+#             */
/*   Updated: 2023/11/07 12:56:49 by vlafouas         ###   ########.fr       */
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

TEST(Stdlib, AtoiValidInput)
{
	test_atoi("0");
	test_atoi("1");
	test_atoi("42");
	test_atoi("-42");
	test_atoi("              \t\n\t 42");
	test_atoi("-1");
}

TEST(Stdlib, AtoiInvalidInput)
{
	test_atoi("yo yoyo what uppppp");
	test_atoi("42 c'est pas mal en fait");
	test_atoi("0xcafe");
	test_atoi("--------42");
}
