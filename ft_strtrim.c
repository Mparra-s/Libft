#include "libft.h"

char	*ft_strtrim(char const *str, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	length;
	char	*dest;

	i = 0;
	j = 0;
	length = ft_strlen(str);
	if ((str == NULL) || (set == NULL))
		return (NULL);
	while (str[i] != '\0' && ft_strchr(set, str[i]) != NULL)
		i++;
	while (length > i && ft_strchr(set, str[length -1]) != NULL)
		length--;
	dest = malloc (length - i + 1);
	if (dest == NULL)
		return (NULL);
	while (i < length)
		dest[j++] = str[i++];
	dest[j] = '\0';
	return (dest);
}
