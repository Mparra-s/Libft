#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	unsigned char	letter;

	letter = (unsigned char) c;
	write (fd, &c, 1);
}
