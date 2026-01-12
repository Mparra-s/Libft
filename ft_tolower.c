/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 12:45:42 by mparra-s          #+#    #+#             */
/*   Updated: 2026/01/12 11:56:31 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int letter)
{
	unsigned char	c;

	c = (unsigned char)letter;
	if (c > 64 && c < 91)
	{
		c = c + 32;
		return (c);
	}
	else
		return (letter);
}
