/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 12:43:50 by mparra-s          #+#    #+#             */
/*   Updated: 2026/01/12 11:55:14 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *scr, int c, size_t len)
{
	unsigned char	letter;
	unsigned char	*cscr;
	size_t			i;

	letter = (unsigned char) c;
	cscr = (unsigned char *) scr;
	i = 0;
	while (i < len)
	{
		if (cscr[i] == letter)
		{
			return ((void *)&cscr[i]);
		}
		i++;
	}
	return (NULL);
}