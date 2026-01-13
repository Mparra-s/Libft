#include "libft.h"

char	*ft_strmapi(char const *str, char (*fun)(unsigned int, char))
{
	char	*sentence;
	int		i;

	i = 0;
	if (str == NULL || fun == NULL)
		return (NULL);
	sentence = malloc(ft_strlen(str) + 1);
	if (sentence == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		sentence[i] = fun(i, str[i]);
		i++;
	}
	sentence[i] = '\0';
	return (sentence);
}
