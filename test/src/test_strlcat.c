#include "libft.h"
#include "test-framework/unity.h"
#include "utils.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef __linux__
#include <bsd/string.h>
#endif

#define BUFFER_SIZE 1024

static void compare_strlcat(const char* src,
                            const char* dest,
                            size_t buffer_size)
{
    char* my_buffer = malloc(buffer_size);
    char* libc_buffer = malloc(buffer_size);
    strlcpy(my_buffer, src, buffer_size);
    strlcpy(libc_buffer, src, buffer_size);

    size_t my_return = ft_strlcat(my_buffer, src, buffer_size);
    size_t libc_return = strlcat(my_buffer, src, buffer_size);

    char error[BUFFER_SIZE];

    sprintf(
        error,
        "Error with return value with input \"%s\", \"%s\" and %zu, ft_strlcat "
        "returned %zu and strlcat returned %zu",
        dest, src, buffer_size, my_return, libc_return);
    TEST_ASSERT_TRUE_MESSAGE(my_return == libc_return, error);

    compare_bytes((t_byte*)libc_buffer, (t_byte*)my_buffer, buffer_size);

    free(my_buffer);
    free(libc_buffer);
}

static void test_strlcat(void) {}

void run_test_strlcat(void)
{
    printf("\n----- Strlcat -----\n");
    RUN_TEST(test_strlcat);
}
