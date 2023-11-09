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
void run_test_ctype(void);

int	main(void)
{
	UnityBegin("Libft");
	run_test_strlen();
	run_test_ctype();
	return (UnityEnd());
}
