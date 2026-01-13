#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*csrc;
	int		i;

	csrc = malloc(ft_strlen(src) + 1);
	if (csrc == NULL)
		return (NULL);
	i = 0;
	while (src[i] != 0)
	{
		csrc[i] = src[i];
		i++;
	}
	csrc[i] = '\0';
	return (csrc);
}
