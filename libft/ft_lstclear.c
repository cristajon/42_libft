/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceaizkor <ceaizkor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 11:49:33 by ceaizkor          #+#    #+#             */
/*   Updated: 2023/02/23 13:35:48 by ceaizkor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*a;
	t_list	*temp;

	a = *lst;
	if (!*lst || !del)
		return ;
	while (a)
	{
		temp = a;
		a = a->next;
		del(temp->content);
		free(temp);
	}
	*lst = NULL;
}
