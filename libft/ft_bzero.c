/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemarino <lemarino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 15:37:28 by lemarino          #+#    #+#             */
/*   Updated: 2025/02/12 18:30:45 by lemarino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//The bzero() function erases the data in the n bytes of the memory starting
// at the location pointed to by s, by
// writing zeros (bytes containing '\0') to that area.
void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*c;

	i = 0;
	c = (unsigned char *)s;
	while (i < n)
		c[i++] = '\0';
}
