#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	unsigned char	letter;
	const char		*cstr;
	int				length;

	cstr = str;
	letter = (unsigned char) c;
	length = 0;
	while (cstr[length] != 0)
		length++;
	while (length >= 0)
	{
		if (cstr[length] == letter)
			return ((char *)cstr + length);
		length--;
	}
	return (0);
}
