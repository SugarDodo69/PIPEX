/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemarino <lemarino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 12:16:22 by lemarino          #+#    #+#             */
/*   Updated: 2024/12/09 12:16:23 by lemarino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	if (n == 0)
		return (NULL);
	while (i < n)
	{
		if (str[i] == (unsigned char) c)
			return ((void *)(s + i));
		i++;
	}
	if (!s)
		return (NULL);
	return (NULL);
}
