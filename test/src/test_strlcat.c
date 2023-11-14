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
}

static void test_strlcat(void) {}

void run_test_strlcat(void)
{
    printf("\n----- Strlcat -----\n");
    RUN_TEST(test_strlcat);
}
