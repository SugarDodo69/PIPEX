/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemarino <lemarino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 18:22:57 by lemarino          #+#    #+#             */
/*   Updated: 2025/02/12 18:35:42 by lemarino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nlen(unsigned int nbr)
{
	int	l;

	l = 0;
	while (nbr)
	{
		nbr /= 16;
		l++;
	}
	return (l);
}

static void	ft_putnbr_hex(unsigned int nbr, const char format)
{
	if (nbr >= 16)
	{
		ft_putnbr_hex((nbr / 16), format);
		ft_putnbr_hex((nbr % 16), format);
	}
	else
	{
		if (nbr <= 9)
			ft_putchar_fd((nbr + '0'), 1);
		else
		{
			if (format == 'x')
				ft_putchar_fd((nbr - 10 + 'a'), 1);
			else if (format == 'X')
				ft_putchar_fd((nbr - 10 + 'A'), 1);
		}
	}
}

int	ft_print_hex(unsigned int nbr, const char format)
{
	if (nbr == 0)
		return (write(1, "0", 1));
	else
		ft_putnbr_hex(nbr, format);
	return (nlen(nbr));
}
