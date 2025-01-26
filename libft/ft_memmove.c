/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemarino <lemarino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 12:16:33 by lemarino          #+#    #+#             */
/*   Updated: 2024/12/09 12:16:34 by lemarino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;
	int			i;

	i = 0;
	s = src;
	d = dest;
	if (!(d) && !(s))
		return (NULL);
	while (n > 0)
	{
		if (d < s)
		{
			d[i] = s[i];
		}
		else
		{
			d[n - 1] = s[n - 1];
		}
		i++;
		n--;
	}
	return (d);
}
