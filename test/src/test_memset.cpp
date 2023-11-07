/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memset.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlafouas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:34:38 by vlafouas          #+#    #+#             */
/*   Updated: 2023/11/07 14:59:43 by vlafouas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <gtest/gtest.h>
#include <stdlib.h>
#include <string.h>

#define N_TESTS 420
#define MAX_SIZE 10000

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
		value = rand();
		value *= sign;
		n_bytes = 1 + rand() % MAX_SIZE;
	}
};

void test_memset(int c, size_t n)
{
	t_byte* my_buffer = (t_byte*)malloc(n);
	t_byte* libc_buffer = (t_byte*)malloc(n);
	ft_memset((void*)my_buffer, c, n);
	memset((void*)libc_buffer, c, n);

	for (size_t i = 0; i < n; i++)
	{
		ASSERT_EQ(my_buffer[i], libc_buffer[i]) << "\t error found at index " << i;
	}
	free(my_buffer);
	free(libc_buffer);
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
