#include "libft.h"

int	ft_isprint(int print)
{
	if (print > 31 && print < 127)
		return (1);
	else
		return (0);
}

