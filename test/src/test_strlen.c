#include "libft.h"

#include "test-framework/unity.h"

#include <string.h>
#include <stdio.h>

#define BUFFER_SIZE 1024

void compare_strlen(const char* s)
{
	int expected = strlen(s);
	int actual = ft_strlen(s);

	char error[BUFFER_SIZE];
	sprintf(error, "Error for input \"%s\", expected %d was %d", s, expected, actual);

	TEST_ASSERT_TRUE_MESSAGE(expected == actual, error);
}

void test_strlen(void)
{
	compare_strlen("SOME");
	compare_strlen("");
	compare_strlen("body once told me the world is gonna roll me");
	compare_strlen("I ain't the sharpest tool in the shed");
	compare_strlen("She was looking kind of dumb with her finger and her thumb");
	compare_strlen("In the shape of an \"L\" on her forehead");	
}

void run_test_strlen(void)
{
	printf("\n----- Strlen -----\n");
	RUN_TEST(test_strlen);
}
