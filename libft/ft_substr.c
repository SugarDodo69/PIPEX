/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemarino <lemarino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 15:37:28 by lemarino          #+#    #+#             */
/*   Updated: 2025/02/05 16:31:59 by lemarino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Allocates (with malloc()) and returns a substring from the string ’s’.
//	The substring begins at index ’start’ and is of maximum size ’len’.
char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	size;
	char	*src;
	char	*sub;

	i = 0;
	src = (char *)s;
	if (start >= ft_strlen(s))
		return ((char *)ft_calloc(1, sizeof(char)));
	if ((start + len) < (ft_strlen(s)))
		size = (len + 1);
	else
		size = (ft_strlen(s) - start + 1);
	sub = (char *)malloc(sizeof (char) * size);
	if (!(sub))
		return (NULL);
	while (src[start] && i < size - 1)
	{
		sub[i] = src[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
