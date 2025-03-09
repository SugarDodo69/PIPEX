/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemarino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:41:53 by lemarino          #+#    #+#             */
/*   Updated: 2024/10/28 14:43:11 by lemarino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c < 32 || c > 126)
		return (0);
	return (1);
}

/*int	main(void)
{
	int	art = -1;
	
	printf("%d\n", ft_isprint(art));
	printf("%d\n", isprint(art));
}*/
