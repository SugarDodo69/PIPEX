/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemarino <lemarino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 15:37:28 by lemarino          #+#    #+#             */
/*   Updated: 2025/03/06 12:47:25 by lemarino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Allocates (with malloc(3)) and returns a copy of ’s1’
//  with the characters specified in ’set’
//	removed from the beginning and the end of the string.
char	*ft_strtrim(char *s1, char const *set)
{
	size_t		start;
	size_t		end;
	char		*s2;

	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > 0 && ft_strchr(set, s1[end]))
		end--;
	s2 = ft_substr(s1, start, end - start + 1);
	if (!s2)
		return (NULL);
	free(s1);
	return (s2);
}
