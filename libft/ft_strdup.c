/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemarino <lemarino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 15:37:28 by lemarino          #+#    #+#             */
/*   Updated: 2025/02/12 18:36:52 by lemarino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//The  strdup() function returns a pointer to a new string 
// which is a duplicate of the string s.  Memory for the
// new string is obtained with malloc(), and can be freed with free().
char	*ft_strdup(const char *s)
{
	char		*src;
	char		*dst;
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	src = (char *)s;
	while (src[j])
		j++;
	dst = malloc(j + 1);
	if (!(dst))
		return (NULL);
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
