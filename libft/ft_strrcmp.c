/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrcmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemarino <lemarino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 14:44:58 by lemarino          #+#    #+#             */
/*   Updated: 2025/02/28 15:15:16 by lemarino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Compares exactly the last n bytes of the two strings s1 and s2.
//  Returns 1 if all bytes are equal, 0 otherwise.
int	ft_strrcmp(const char *s1, const char *s2, size_t n)
{
	int	i;
	int	l1;
	int	l2;

	i = n;
	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	while (i >= 0)
	{
		if (s1[l1--] != s2[l2--])
			return (0);
		i--;
	}
	return (1);
}
