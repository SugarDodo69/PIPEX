/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemarino <lemarino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 12:15:33 by lemarino          #+#    #+#             */
/*   Updated: 2025/03/04 12:47:04 by lemarino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Returns a pointer to right after the first occurrence of
// the character c in the string s.
char	*ft_strchr2(const char *s, int c)
{
	int		i;
	char	chr;

	chr = (char)c;
	i = 0;
	while (s[i])
	{
		if (s[i] == chr)
			return ((char *)&s[i + 1]);
		i++;
	}
	if (chr == 0)
		return ((char *)(s + i));
	return (NULL);
}
