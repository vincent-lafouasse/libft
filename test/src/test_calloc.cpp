/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_calloc.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlafouas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:22:10 by vlafouas          #+#    #+#             */
/*   Updated: 2023/11/07 13:25:41 by vlafouas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <gtest/gtest.h>

extern "C"
{
#include "libft.h"
};

void test_calloc(size_t nmemb, size_t size)
{
	unsigned char* buffer = (unsigned char*)ft_calloc(nmemb, size);
	size_t n_bytes = nmemb * size;

	for (size_t i = 0; i < n_bytes; i++)
	{
		EXPECT_EQ(buffer[i], 0) << "\t found non-zero element at index " << i;
	}
	free(buffer);
}

TEST(Stdlib, Calloc)
{
	test_calloc(1, 1);
}
