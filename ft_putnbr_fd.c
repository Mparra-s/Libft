/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 12:16:06 by mparra-s          #+#    #+#             */
/*   Updated: 2026/01/12 11:55:38 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
