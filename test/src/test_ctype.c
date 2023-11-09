#include "libft.h"

#include "test-framework/unity.h"

#include <ctype.h>
#include <stdio.h>

#define BUFFER_SIZE 1024

#define LOWER_BOUND -1
#define UPPER_BOUND 255

void compare_isupper(int c)
{
	int expected = isupper(c);
	int actual = ft_isupper(c);

	char error[BUFFER_SIZE];
	sprintf(error, "Error for input %c, ie ASCII %d, expected %d was %d", c, c, expected, actual);

	TEST_ASSERT_TRUE_MESSAGE(expected == actual, error);
}

void compare(int (*my_ft)(int), int (*libc_ft)(int)  ,int c)
{
	int expected = (*libc_ft)(c);
	int actual = (*my_ft)(c);

	char error[BUFFER_SIZE];
	sprintf(error, "Error for input %c, ie ASCII %d, expected %d was %d", c, c, expected, actual);

	TEST_ASSERT_TRUE_MESSAGE(expected == actual, error);
}

void test_islower(void)
{
	int (*my_ft)(int) = &ft_islower;
	int (*libc_ft)(int) = &islower;

	for (int c = LOWER_BOUND; c <= UPPER_BOUND; c++)
		compare(my_ft, libc_ft, c);
}

void test_isupper(void)
{
	for (int c = LOWER_BOUND; c <= UPPER_BOUND; c++)
		compare_isupper(c);
}

void run_test_ctype(void)
{
	printf("\n----- Ctype -----\n");
	RUN_TEST(test_isupper);
	RUN_TEST(test_islower);
}
