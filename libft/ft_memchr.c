/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemarino <lemarino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 15:37:28 by lemarino          #+#    #+#             */
/*   Updated: 2025/02/12 18:33:00 by lemarino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//The  memchr()  function scans the initial n bytes of the memory area pointed
//  to by s for the first instance of c.
// Both c and the bytes of the memory area pointed to by s are interpreted
//  as unsigned char.
// Returns a pointer to the matching byte or NULL if the character
//  does not occur in the given memory area.
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
