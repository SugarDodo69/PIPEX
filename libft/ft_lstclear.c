/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemarino <lemarino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 17:25:53 by lemarino          #+#    #+#             */
/*   Updated: 2025/02/05 16:31:59 by lemarino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Deletes and frees the given node and every
successor of that node, using the function ’del’
and free(3).
Finally, the pointer to the list must be set to
NULL. */
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;
	t_list	*pos;

	tmp = NULL;
	pos = NULL;
	if (*lst == NULL || !lst || !del)
		return ;
	pos = *lst;
	while (pos)
	{
		tmp = pos;
		pos = pos -> next;
		del(tmp -> content);
		free(tmp);
	}
	*lst = NULL;
}
