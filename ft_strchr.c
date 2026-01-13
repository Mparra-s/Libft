#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	unsigned char	letter;
	const char		*cstr;

	cstr = str;
	letter = (unsigned char) c;
	while (*cstr)
	{
		if (*cstr == letter)
			return ((char *)cstr);
		cstr++;
	}
	if (letter == '\0')
		return ((char *)cstr);
	return (NULL);
}
