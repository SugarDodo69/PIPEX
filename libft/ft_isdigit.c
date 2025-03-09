/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemarino <lemarino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:14:43 by lemarino          #+#    #+#             */
/*   Updated: 2024/11/25 19:39:51 by lemarino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (!(c >= 48 && c <= 57))
		return (0);
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d", ft_isdigit("7hs"));
	printf("%d", ft_isdigit("6455"));
	printf("%d", ft_isdigit(""));
}*/
