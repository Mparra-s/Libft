#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*sentence;

	sentence = (t_list *)malloc(sizeof (t_list));
	if (sentence == NULL)
		return (NULL);
	sentence->content = content;
	sentence->next = NULL;
	return (sentence);
}
