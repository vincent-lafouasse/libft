#include "libft.h"
#include "test-framework/unity.h"
#include "utils.h"

#include <string.h>
#include <bsd/string.h>
#include <stdlib.h>
#include <stdio.h>

#define BUFFER_SIZE 1024

static void compare_strlcpy(const char* src, size_t size)
{
	char* my_dest = malloc(size);
	char* libc_dest = malloc(size);
	bzero(my_dest, size);
	bzero(libc_dest, size);

	size_t my_out = ft_strlcpy(my_dest, src, size);
	size_t libc_out = strlcpy(libc_dest, src, size);

	char error[BUFFER_SIZE];

	sprintf(error, "Error with return value with input \"%s\" and %zu, ft_strlcpy returned %zu and strlcpy returned %zu", src, size, my_out, libc_out);
	TEST_ASSERT_TRUE_MESSAGE(my_out == libc_out, error);

	compare_bytes((t_byte*)libc_dest, (t_byte*)my_dest, size);

	free(my_dest);
	free(libc_dest);
}

static void test_strlcpy(void)
{
	compare_strlcpy("Yoyoyo", 0);
	compare_strlcpy("Yoyoyo", 3);
	compare_strlcpy("Yoyoyo", 126);
	compare_strlcpy("", 0);
	compare_strlcpy("", 420);
}

void run_test_strlcpy(void)
{
    printf("\n----- Strlcpy -----\n");
    RUN_TEST(test_strlcpy);
}
