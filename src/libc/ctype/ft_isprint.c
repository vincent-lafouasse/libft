#include "libft.h"

#define DEL 127

int	ft_isprint(int c)
{
	return (c >= ' ' && c < DEL);
}
