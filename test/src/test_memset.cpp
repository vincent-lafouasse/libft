/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memset.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlafouas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:34:38 by vlafouas          #+#    #+#             */
/*   Updated: 2023/11/07 13:39:24 by vlafouas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <gtest/gtest.h>

extern "C"
{
#include "libft.h"
};

void test_memset(void *s, int c, size_t n)
{
	unsigned char* buffer = (unsigned char*)s;

	for (size_t i = 0; i < n; i++)
	{
		ASSERT_EQ(buffer[i], c) << "\t error found at index " << i;
	}
}

TEST(String, Memset)
{
	test_memset(0, 0, 0);
}
