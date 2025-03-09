/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemarino <lemarino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 17:25:36 by lemarino          #+#    #+#             */
/*   Updated: 2025/02/12 18:35:49 by lemarino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_putnbr_p(unsigned long nbr)
{
	int	l;

	l = 0;
	if (nbr >= 16)
	{
		l += ft_putnbr_p((nbr / 16));
		l += ft_putnbr_p((nbr % 16));
	}
	else
	{
		if (nbr <= 9)
			l += ft_putchar_fd((nbr + '0'), 1);
		else
			l += ft_putchar_fd((nbr - 10 + 'a'), 1);
	}
	return (l);
}

int	ft_print_p(intptr_t *p)
{
	int	l;

	l = 0;
	if (!p)
		return (write(1, "(nil)", 5));
	l += write(1, "0x", 2);
	l += ft_putnbr_p((unsigned long)p);
	return (l);
}
