/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemarino <lemarino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 20:02:46 by lemarino          #+#    #+#             */
/*   Updated: 2025/02/05 16:31:59 by lemarino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	countd(unsigned int n)
{
	unsigned int	l;

	l = 1;
	while (n >= 10)
	{
		l++;
		n = n / 10;
	}
	return (l);
}

int	ft_print_u(unsigned int n)
{
	char				*s;
	unsigned int		l;
	unsigned int		i;

	if (n == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	l = 0;
	l = countd(n);
	s = (char *)ft_calloc((size_t)(l + 1), (sizeof(char)));
	if (!s)
		return (0);
	i = l - 1;
	while (n >= 1)
	{
		s[i--] = (n % 10) + 48;
		n /= 10;
	}
	ft_putstr_fd(s, 1);
	free(s);
	return (l);
}
