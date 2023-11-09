#include "libft.h"

#include "test-framework/unity.h"

#include <string.h>
#include <stdio.h>

void compare_strlen(const char* s)
{
	TEST_ASSERT_TRUE_MESSAGE(strlen(s) == ft_strlen(s), s);
}

void test_strlen(void)
{
	compare_strlen("");
	compare_strlen("SOME");
	compare_strlen("body once told me the world is gonna roll me");
	compare_strlen("I ain't the sharpest tool in the shed");
	compare_strlen("She was looking kind of dumb with her finger and her thumb");
	compare_strlen("In the shape of an \"L\" on her forehead");	
}

void run_test_strlen(void)
{
	printf("\nStrlen\n");
	RUN_TEST(test_strlen);
}
