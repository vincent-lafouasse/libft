#include "utils.h"

#include "libft.h"

#include <stdlib.h>

void scramble_array(void* array, size_t size)
{
    t_byte* bytes = (t_byte*)array;

    for (size_t i = 0; i < size; i++)
    {
        bytes[i] = rand();
    }
}
