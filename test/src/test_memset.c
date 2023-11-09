#include "libft.h"

#include "test-framework/unity.h"

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024
#define MAX_SIZE 1024
#define N_TRIALS 420

void scramble_array(void* array, size_t size)
{
	t_byte* bytes = (t_byte*) array;

	for (size_t i = 0; i < size; i++)
	{
		bytes[i] = rand();
	}
}

typedef struct {
	int value;
	size_t size;
} Input;

void try_memset(Input in)
{
	if (in.size == 0)
		TEST_PASS();

	char error[BUFFER_SIZE];
	t_byte expected;
	t_byte actual;

	t_byte* bytes = malloc(in.size);
	scramble_array(bytes, in.size);

	memset(bytes, in.value, in.size);

	for (size_t i = 0; i < in.size; i++)
	{
		expected = in.value;
		actual = bytes[i];

		if (expected != actual)
		{
			sprintf(error, "Error at byte %zu, expected 0x%02x was 0x%02x", i, expected, actual);
			TEST_FAIL_MESSAGE(error);
		}
	}
	free(bytes);
}

Input get_random_input()
{
	Input in;
	
	in.value = rand();
	in.size = 1 + rand() % MAX_SIZE;
	return in;
}

Input input(int value, size_t size)
{
	Input in;

	in.value = value;
	in.size = size;
	return in;
}

void test_memset(void)
{
	try_memset(input(0, 0));
	try_memset(input(69, 420));
}

void test_stochastic_memset(void)
{
	for (int i = 0; i < N_TRIALS; i++)
		try_memset(get_random_input());
}

void run_test_memset(void)
{
	printf("\n----- Memset -----\n");
	RUN_TEST(test_memset);
	RUN_TEST(test_stochastic_memset);
}
