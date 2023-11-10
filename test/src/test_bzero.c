#include "libft.h"

#include "test-framework/unity.h"

#include "utils.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 1024
#define N_TRIALS 420

static void try_bzero(size_t size)
{
    if (size == 0)
        TEST_PASS();

    t_byte* bytes = malloc(size);
    scramble_array(bytes, size);

    ft_bzero(bytes, size);

    for (size_t i = 0; i < size; i++)
    {
        t_byte expected = 0;
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

static void test_stochastic_bzero(void)
{
    for (int i = 0; i < N_TRIALS; i++)
        try_bzero(random_size());
}

void run_test_bzero(void)
{
    printf("\n----- Bzero -----\n");
    RUN_TEST(test_stochastic_bzero);
}
