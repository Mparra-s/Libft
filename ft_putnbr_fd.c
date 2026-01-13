#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned char	nbr;
	long int		num;

	num = (long int) n;
	if (num < 0)
	{
		num = num * -1;
		write(fd, "-", 1);
	}
	if (num > 9)
		ft_putnbr_fd(num / 10, fd);
	nbr = (num % 10) + '0';
	write (fd, &nbr, 1);
}
