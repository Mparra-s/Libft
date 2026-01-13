#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t length)
{
	size_t	length_dest;
	size_t	length_str;
	size_t	i;
	char	*dest;

	i = 0;
	if (str == NULL)
		return (NULL);
	length_str = ft_strlen(str);
	if (start >= length_str)
		return (ft_calloc(1, sizeof(char)));
	if (length_str - start < length)
		length_dest = length_str - start;
	else
		length_dest = length;
	dest = (char *)malloc(length_dest + 1);
	if (dest == NULL)
		return (NULL);
	while (i < length_dest)
	{
		dest[i] = str[start + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
