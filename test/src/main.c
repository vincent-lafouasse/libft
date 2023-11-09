#include "libft.h"
#include "test-framework/unity.h"

#include <stdio.h>

void	setUp(void)
{
}

void	tearDown(void)
{
}

void	test_atoi(void);
void	test_2(void);

int	main(void)
{
	UnityBegin("Libft");
	printf("\nModule 1\n");
	RUN_TEST(test_atoi);
	printf("\nModule 2\n");
	RUN_TEST(test_2);
	return (UnityEnd());
}
