/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_bzero.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlafouas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:34:38 by vlafouas          #+#    #+#             */
/*   Updated: 2023/11/07 16:13:53 by vlafouas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <gtest/gtest.h>
#include <stdlib.h>
#include <strings.h>

#define N_TESTS 420
#define MAX_SIZE 10000

extern "C"
{
#include "libft.h"
};

struct Size
{
	size_t n_bytes;

	void set_random() {
		n_bytes = 1 + rand() % MAX_SIZE;
	}
};

void test_bzero(size_t n)
{
	t_byte* my_buffer = (t_byte*)malloc(n);
	ft_bzero((void*)my_buffer, n);

	for (size_t i = 0; i < n; i++)
	{
		ASSERT_EQ(my_buffer[i], 0) << "\t error found at index " << i;
	}
	free(my_buffer);
}

TEST(Strings, Bzero)
{
	Size size;
	
	for (int i = 0; i < N_TESTS; i++)
	{
		size.set_random();
	    test_bzero(size.n_bytes);
	}
}
