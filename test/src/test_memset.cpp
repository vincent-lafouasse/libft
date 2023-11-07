/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memset.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlafouas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:34:38 by vlafouas          #+#    #+#             */
/*   Updated: 2023/11/07 14:02:19 by vlafouas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <gtest/gtest.h>
#include <iostream>
#include <stdlib.h>

#define N_TESTS 420

extern "C"
{
#include "libft.h"
};

struct MemsetInput
{
	int value;
	size_t n_bytes;

	void set_random() {
		int is_positive = rand() % 2;
		int sign = 1 * is_positive + (-1) * (!is_positive);
		value = rand() % 100000;
		value *= sign;
		n_bytes = 1 + rand() % 10000;
	}
};

void test_memset(int c, size_t n)
{
	unsigned char* buffer = (unsigned char*)malloc(n);
	ft_memset((void*)buffer, c, n);

	for (size_t i = 0; i < n; i++)
	{
		std::cout << rand() << '\n';
		ASSERT_EQ(buffer[i], c) << "\t error found at index " << i;
	}
}

TEST(String, Memset)
{
	MemsetInput in;
	
	for (int i = 0; i < N_TESTS; i++)
	{
		in.set_random();
	    test_memset(in.value, in.n_bytes);
	}
}
