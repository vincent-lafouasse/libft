/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlen.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlafouas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:18:59 by vlafouas          #+#    #+#             */
/*   Updated: 2023/11/07 16:21:44 by vlafouas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <gtest/gtest.h>

#include <string.h>

extern "C"
{
#include "libft.h"
};

void test_strlen(const char* s)
{
	ASSERT_EQ(ft_strlen(s), strlen(s)) << "\terror found with input : " << s;
}

TEST(String, Strlen)
{
	test_strlen("");
	test_strlen("SOME");
	test_strlen("body once told me the world is gonna roll me");
	test_strlen("I ain't the sharpest tool in the shed");
	test_strlen("She was looking kind of dumb with her finger and her thumb");
	test_strlen("In the shape of an \"L\" on her forehead");
}
