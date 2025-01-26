/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemarino <lemarino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 12:16:18 by lemarino          #+#    #+#             */
/*   Updated: 2024/12/09 12:16:18 by lemarino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_placenbr(char *s, size_t c, int n)
{
	c--;
	if (n == 0)
		s[c] = '0';
	if (n == -2147483648)
	{
		s[c--] = '8';
		n = -214748364;
	}
	if (n < 0)
	{
		s[0] = '-';
		n = -n;
	}
	while (n >= 1)
	{
		s[c--] = (n % 10) + 48;
		n /= 10;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	char		*str;
	size_t		count;
	int			j;

	count = 1;
	j = n;
	if (n < 0)
	{
		count++;
		j = -j;
	}
	if (n == -2147483648)
		j = 2147483647;
	while (j >= 10)
	{
		count++;
		j = j / 10;
	}
	str = (char *)ft_calloc((count + 1), (sizeof(char)));
	if (!str)
		return (NULL);
	str = ft_placenbr(str, count, n);
	return (str);
}
