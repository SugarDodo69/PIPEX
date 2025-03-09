/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemarino <lemarino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 14:37:16 by lemarino          #+#    #+#             */
/*   Updated: 2025/02/05 16:31:59 by lemarino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Counts the number of nodes in a list.
int	ft_lstsize(t_list *lst)
{
	size_t	count;
	t_list	*tmp;

	tmp = lst;
	count = 0;
	while (tmp)
	{
		count++;
		tmp = tmp -> next;
	}
	return (count);
}
