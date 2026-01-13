#include "libft.h"

void	ft_putendl_fd(char *str, int fd)
{
	unsigned char	*cstr;
	int				i;

	cstr = (unsigned char *)str;
	i = 0;
	while (cstr[i] != '\0')
	{
		write(fd, &cstr[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}
