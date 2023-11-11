#include "libft.h"
#include "test-framework/unity.h"
#include "utils.h"

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

static void compare_memcpy(const void* src, size_t n)
{
	t_byte* my_buffer = malloc(n);
	t_byte* libc_buffer = malloc(n);

	ft_memcpy(my_buffer, src, n);
	memcpy(libc_buffer, src, n);

	compare_bytes(libc_buffer, my_buffer, n);

	free(my_buffer);
	free(libc_buffer);
}

static void test_memcpy(void)
{
	compare_memcpy("aaaaaaaaaaaaaaaaaaa", 0);
	compare_memcpy("aaaaaaaaaaaaaaaaaaa", 1);
	compare_memcpy("aaaaaaaaaaaaaaaaaaa", 420);
}

void run_test_memcpy(void)
{
    printf("\n----- Memcpy -----\n");
    RUN_TEST(test_memcpy);
}
