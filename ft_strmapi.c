/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 18:13:04 by mparra-s          #+#    #+#             */
/*   Updated: 2026/01/12 11:56:11 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*char    ft_letterf(unsigned int a, char letter)
{
    letter = ft_toupper(letter);
    return  (letter);
}*/

char	*ft_strmapi(char const *str, char (*fun)(unsigned int, char))
{
	char	*sentence;
	int		i;

	i = 0;
	if (str == NULL || fun == NULL)
		return (NULL);
	sentence = malloc(ft_strlen(str) + 1);
	if (sentence == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		sentence[i] = fun(i, str[i]);
		i++;
	}
	sentence[i] = '\0';
	return (sentence);
}
