/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 13:30:30 by mparra-s          #+#    #+#             */
/*   Updated: 2026/01/12 11:54:16 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*src;
	size_t			total_size;
	size_t			i;

	i = 0;
	if (size != 0 && nmemb >= __SIZE_MAX__ / size)
		return (NULL);
	total_size = nmemb * size;
	src = malloc(total_size);
	if (src == NULL)
		return (NULL);
	while (i < total_size)
	{
		src[i] = 0;
		i++;
	}
	return (src);
}
