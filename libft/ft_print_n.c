/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_n.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemarino <lemarino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 17:08:39 by lemarino          #+#    #+#             */
/*   Updated: 2024/12/09 14:03:19 by lemarino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_n(int n)
{
	char	*s;
	int		l;

	s = ft_itoa(n);
	l = ft_strlen(s);
	ft_putstr_fd(s, 1);
	free(s);
	return (l);
}
