/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemarino <lemarino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 15:37:28 by lemarino          #+#    #+#             */
/*   Updated: 2025/03/06 12:48:36 by lemarino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// The  memcmp()  function  compares the first n bytes
//  (each interpreted as unsigned char) of the memory areas s1 and s2.
// The memcmp() function returns an integer less than, equal to,
//  or greater than zero if the first n bytes of s1 is found, respectively,
//  to be less than, to match, or be greater than the first n bytes of s2.
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*a;
	const unsigned char	*b;

	i = 0;
	a = (const unsigned char *) s1;
	b = (const unsigned char *) s2;
	while (i < n)
	{
		if (a[i] != b[i])
			return (a[i] - b[i]);
		i++;
	}
	return (0);
}
