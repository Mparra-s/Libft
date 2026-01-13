#include "libft.h"

int	ft_memcmp(const void *src1, const void *src2, size_t n)
{
	unsigned const char	*csrc1;
	unsigned const char	*csrc2;
	size_t				i;

	csrc1 = (unsigned const char *) src1;
	csrc2 = (unsigned const char *) src2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (csrc1[i] != csrc2[i])
			return (csrc1[i] - csrc2[i]);
		i++;
	}
	return (0);
}
