/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemarino <lemarino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 15:37:28 by lemarino          #+#    #+#             */
/*   Updated: 2025/02/12 18:39:52 by lemarino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Locates the first occurrence of the  null-terminated  string little
//  in the string big, where not more than len characters are searched.
// Characters that appear after a '\0' character  are not  searched.
// If little is an empty string, big is returned;
//  if little occurs nowhere in big, NULL is returned;
// 	otherwise a pointer to	the first character of the first occurrence
//  of little is returned.
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
