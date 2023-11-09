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
void run_module_1(void);

int	main(void)
{
	UnityBegin("Libft");
	run_module_1();
	printf("\nModule 2\n");
	RUN_TEST(test_2);
	return (UnityEnd());
}
