/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 12:44:36 by mparra-s          #+#    #+#             */
/*   Updated: 2026/01/12 11:55:46 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
