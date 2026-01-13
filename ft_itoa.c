#include "libft.h"

static long int	ft_count(int n)
{
	long int	count;
	long int	num;

	count = 0;
	num = (long int)n;
	if (num == 0)
		return (1);
	if (num < 0)
	{
		num = -num;
		count++;
	}
	while (num > 0)
	{
		num /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	long int	nbr;
	long int	len;
	char		*str;

	nbr = (long int)n;
	len = ft_count(n);
	str = malloc ((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	if (nbr == 0)
		str[0] = '0';
	while (nbr > 0)
	{
		str[--len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (str);
}
