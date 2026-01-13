#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*aux;

	if (!lst || !del)
		return ;
	while ((*lst) != NULL)
	{
		aux = (*lst)->next;
		del ((*lst)->content);
		free (*lst);
		*lst = aux;
	}
}
