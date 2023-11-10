#include "libft.h"

#include "test-framework/unity.h"

#include "utils.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 1024
#define N_TRIALS 420

static void try_memset(int value, size_t size)
{
    if (size == 0)
        TEST_PASS();

    t_byte* bytes = malloc(size);
    scramble_array(bytes, size);

    ft_memset(bytes, value, size);

    for (size_t i = 0; i < size; i++)
    {
        t_byte expected = value;
        t_byte actual = bytes[i];

        if (expected != actual)
        {
            char error[BUFFER_SIZE];
            sprintf(error, "Error at byte %zu, expected 0x%02x was 0x%02x", i,
                    expected, actual);
            TEST_FAIL_MESSAGE(error);
        }
    }
    free(bytes);
}

static void test_memset(void)
{
    try_memset(0, 0);
    try_memset(69, 420);
}

static void test_stochastic_memset(void)
{
    for (int i = 0; i < N_TRIALS; i++)
        try_memset(random_int(), random_size());
}

void run_test_memset(void)
{
    printf("\n----- Memset -----\n");
    RUN_TEST(test_memset);
    RUN_TEST(test_stochastic_memset);
}
