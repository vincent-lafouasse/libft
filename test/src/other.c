#include "libft.h"
#include "test-framework/unity.h"

void	test_atoi(void)
{
	TEST_ASSERT_EQUAL_INT(42, ft_atoi("42"));
}

void test_2(void)
{
	TEST_ASSERT_EQUAL_INT(42, 42);
}
