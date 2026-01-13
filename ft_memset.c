#include "libft.h"

void	*ft_memset(void *str, int c, size_t size)
{
	unsigned char	car;
	char			*sentence;
	size_t			i;

	sentence = (char *) str;
	car = (unsigned char) c;
	i = 0;
	while (i < size)
	{
		sentence[i] = car;
		i++;
	}
	return (sentence);
}

