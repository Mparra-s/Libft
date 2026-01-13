#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	length_dest;
	unsigned int	length_src;
	unsigned int	i;

	i = 0;
	length_dest = 0;
	length_src = 0;
	while (src[length_src])
		length_src++;
	while (dest[length_dest])
		length_dest++;
	if (length_dest >= size)
		return (length_src + size);
	while (src[i] != '\0' && (length_dest + i < size - 1))
	{
		dest[length_dest + i] = src[i];
		i++;
	}
	dest[length_dest + i] = '\0';
	return (length_dest + length_src);
}
