#include "libft.h"
#include "test-framework/unity.h"

#include <stdio.h>

void	setUp(void)
{
}

void	tearDown(void)
{
}

void run_test_strlen(void);

int	main(void)
{
	UnityBegin("Libft");
	run_test_strlen();
	return (UnityEnd());
}
