#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*src;
	size_t			total_size;
	size_t			i;

	i = 0;
	if (size != 0 && nmemb >= __SIZE_MAX__ / size)
		return (NULL);
	total_size = nmemb * size;
	src = malloc(total_size);
	if (src == NULL)
		return (NULL);
	while (i < total_size)
	{
		src[i] = 0;
		i++;
	}
	return (src);
}
