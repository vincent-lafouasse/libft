#include "utils.h"

#include "libft.h"

#include <stdlib.h>

#define MAX_SIZE 1024

void scramble_array(void* array, size_t size)
{
    t_byte* bytes = (t_byte*)array;

    for (size_t i = 0; i < size; i++)
    {
        bytes[i] = rand();
    }
}

size_t random_size()
{
    return rand() % MAX_SIZE;
}

int random_int()
{
    return rand() - RAND_MAX / 2;
}
