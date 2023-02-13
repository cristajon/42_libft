#include "libft.h"
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *a;
	t_list *temp;

	a = *lst;
	if(!*lst)
		return;
	while(a)
	{
		temp = a;
		a = a->next;
		del(temp->content);
		free(temp);
	}
	*lst = NULL;
}