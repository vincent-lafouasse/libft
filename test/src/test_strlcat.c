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
    char* my_buffer = malloc(1 + buffer_size + strlen(dest) + strlen(src));
    char* libc_buffer = malloc(1 + buffer_size + strlen(dest) + strlen(src));
    strcpy(my_buffer, dest);
    strcpy(libc_buffer, dest);

    size_t my_return = ft_strlcat(my_buffer, src, buffer_size);
    size_t libc_return = strlcat(my_buffer, src, buffer_size);

    char error[BUFFER_SIZE];

    sprintf(
        error,
        "Error with return value with input \"%s\", \"%s\" and %zu, ft_strlcat "
        "returned %zu and strlcat returned %zu",
        src, dest, buffer_size, my_return, libc_return);
    TEST_ASSERT_TRUE_MESSAGE(my_return == libc_return, error);

    TEST_ASSERT_EQUAL_STRING(libc_buffer, my_buffer);

    free(my_buffer);
    free(libc_buffer);
}

static void test_strlcat(void)
{
    compare_strlcat("aaa", "bbb", 0);
    compare_strlcat("aaa", "bbb", 1);
    compare_strlcat("aaa", "bbb", 2);
    compare_strlcat("aaa", "bbb", 3);
    compare_strlcat("aaa", "bbb", 4);
    compare_strlcat("aaa", "bbb", 5);
    compare_strlcat("aaa", "bbb", 5);
    compare_strlcat("aaa", "bbb", 6);
    compare_strlcat("aaa", "bbb", 7);
    compare_strlcat("aaa", "bbb", 8);
}

void run_test_strlcat(void)
{
    printf("\n----- Strlcat -----\n");
    RUN_TEST(test_strlcat);
}
