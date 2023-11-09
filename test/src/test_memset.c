#include "libft.h"

#include "test-framework/unity.h"

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

void scramble_array(void* array, size_t size)
{
	t_byte* bytes = (t_byte*) array;

	for (size_t i = 0; i < size; i++)
	{
		bytes[i] = rand();
	}
}

void try_memset(int value, size_t size)
{
	char error[BUFFER_SIZE];
	t_byte expected;
	t_byte actual;

	t_byte* bytes = malloc(size);
	scramble_array(bytes, size);

	memset(bytes, value, size);

	for (size_t i = 0; i < size; i++)
	{
		expected = value;
		actual = bytes[i];

		if (expected != actual)
		{
			sprintf(error, "Error at byte %u, expected 0x%02x was 0x%02x", i, expected, actual);
			TEST_FAIL_MESSAGE(error);
		}
	}
}

void test_memset(void)
{
	try_memset(5, 5);
}

void run_test_memset(void)
{
	printf("\n----- Memset -----\n");
	RUN_TEST(test_memset);
}
