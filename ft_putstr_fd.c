/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 11:32:15 by mparra-s          #+#    #+#             */
/*   Updated: 2026/01/12 11:55:41 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *str, int fd)
{
	unsigned char	*cstr;
	int				i;

	cstr = (unsigned char *)str;
	i = 0;
	while (cstr[i] != '\0')
	{
		write (fd, &cstr[i], 1);
		i++;
	}
}
