#include "libft.h"

#include "test-framework/unity.h"

#include "utils.h"

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024
#define MAX_SIZE 1024
#define N_TRIALS 420

void try_bzero(size_t size)
{
	if (size == 0)
		TEST_PASS();

	char error[BUFFER_SIZE];
	t_byte expected;
	t_byte actual;

	t_byte* bytes = malloc(size);
	scramble_array(bytes, size);

	ft_bzero(bytes, size);

	for (size_t i = 0; i < size; i++)
	{
		expected = 0;
		actual = bytes[i];

		if (expected != actual)
		{
			sprintf(error, "Error at byte %zu, expected 0x%02x was 0x%02x", i, expected, actual);
			TEST_FAIL_MESSAGE(error);
		}
	}

	free(bytes);
}

size_t random_size()
{
	return rand() % MAX_SIZE;
}

void test_stochastic_bzero(void)
{
	for (int i = 0; i < N_TRIALS; i++)
		try_bzero(random_size());
}

void run_test_bzero(void)
{
	printf("\n----- Bzero -----\n");
	RUN_TEST(test_stochastic_bzero);
}
