#include "libft.h"

int	ft_isdigit(int num)
{
	if (num > 47 && num < 58)
		return (1);
	else
		return (0);
}

