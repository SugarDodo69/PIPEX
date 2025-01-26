/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemarino <lemarino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 12:17:38 by lemarino          #+#    #+#             */
/*   Updated: 2024/12/09 12:17:39 by lemarino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*b;

	i = 0;
	b = (char *)big;
	if (little[0] == '\0')
		return (b);
	while (i < len && big[i])
	{
		j = 0;
		while (big[i + j] == little[j] && little[j] && ((i + j) < len))
		{
			j++;
		}
		if (j == ft_strlen(little))
			return (&b[i]);
		i++;
	}
	return (NULL);
}
