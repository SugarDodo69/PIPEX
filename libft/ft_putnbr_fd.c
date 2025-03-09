/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemarino <lemarino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 15:37:28 by lemarino          #+#    #+#             */
/*   Updated: 2025/02/05 16:31:59 by lemarino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*n: The integer to output.
fd: The file descriptor on which to write.
Outputs the integer ’n’ to the given file
descriptor. */
size_t	ft_putnbr_fd(int n, int fd)
{
	char	*s;
	size_t	i;

	i = 0;
	if (fd)
	{
		s = ft_itoa(n);
		i += ft_putstr_fd(s, fd);
		free(s);
	}
	return (i);
}
/*
############# In alternative:#############
	char	digit;

	if (n == -2147483648)
	{
		write(fd, "-2", 2);
		n = 147483648;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	digit = (n % 10) + '0';
	write(fd, &digit, 1);
*/
