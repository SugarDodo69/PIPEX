/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemarino <lemarino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 14:37:16 by lemarino          #+#    #+#             */
/*   Updated: 2025/01/26 15:59:46 by lemarino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

// Counts the number of nodes in a list.