#include "libft.h"

#include "test-framework/unity.h"

#include <ctype.h>
#include <stdio.h>

#define BUFFER_SIZE 1024

#define LOWER_BOUND -1
#define UPPER_BOUND 255

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
	int (*my_ft)(int) = &ft_isupper;
	int (*libc_ft)(int) = &isupper;

	for (int c = LOWER_BOUND; c <= UPPER_BOUND; c++)
		compare(my_ft, libc_ft, c);
}

void test_isdigit(void)
{
	int (*my_ft)(int) = &ft_isdigit;
	int (*libc_ft)(int) = &isdigit;

	for (int c = LOWER_BOUND; c <= UPPER_BOUND; c++)
		compare(my_ft, libc_ft, c);
}

void test_isascii(void)
{
	int (*my_ft)(int) = &ft_isascii;
	int (*libc_ft)(int) = &isascii;

	for (int c = LOWER_BOUND; c <= UPPER_BOUND; c++)
		compare(my_ft, libc_ft, c);
}

void test_isprint(void)
{
	int (*my_ft)(int) = &ft_isprint;
	int (*libc_ft)(int) = &isprint;

	for (int c = LOWER_BOUND; c <= UPPER_BOUND; c++)
		compare(my_ft, libc_ft, c);
}

void test_isalpha(void)
{
	int (*my_ft)(int) = &ft_isalpha;
	int (*libc_ft)(int) = &isalpha;

	for (int c = LOWER_BOUND; c <= UPPER_BOUND; c++)
		compare(my_ft, libc_ft, c);
}

void test_isalnum(void)
{
	int (*my_ft)(int) = &ft_isalnum;
	int (*libc_ft)(int) = &isalnum;

	for (int c = LOWER_BOUND; c <= UPPER_BOUND; c++)
		compare(my_ft, libc_ft, c);
}

void test_isspace(void)
{
	int (*my_ft)(int) = &ft_isspace;
	int (*libc_ft)(int) = &isspace;

	for (int c = LOWER_BOUND; c <= UPPER_BOUND; c++)
		compare(my_ft, libc_ft, c);
}

void test_toupper(void)
{
	int (*my_ft)(int) = &ft_toupper;
	int (*libc_ft)(int) = &toupper;

	for (int c = LOWER_BOUND; c <= UPPER_BOUND; c++)
		compare(my_ft, libc_ft, c);
}

void test_tolower(void)
{
	int (*my_ft)(int) = &ft_tolower;
	int (*libc_ft)(int) = &tolower;

	for (int c = LOWER_BOUND; c <= UPPER_BOUND; c++)
		compare(my_ft, libc_ft, c);
}

void run_test_ctype(void)
{
	printf("\n----- Ctype -----\n");
	RUN_TEST(test_isdigit);
	RUN_TEST(test_isascii);
	RUN_TEST(test_isprint);
	RUN_TEST(test_isalpha);
	RUN_TEST(test_isalnum);
	RUN_TEST(test_islower);
	RUN_TEST(test_isupper);
	RUN_TEST(test_isspace);
	RUN_TEST(test_toupper);
	RUN_TEST(test_tolower);
}
