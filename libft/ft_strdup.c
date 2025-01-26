/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemarino <lemarino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 12:17:18 by lemarino          #+#    #+#             */
/*   Updated: 2024/12/09 12:17:19 by lemarino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	dst = (char *)malloc(sizeof(char) * j + 1);
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
