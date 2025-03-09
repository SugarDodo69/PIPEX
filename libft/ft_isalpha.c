/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemarino <lemarino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 22:20:06 by lemarino          #+#    #+#             */
/*   Updated: 2024/11/26 10:46:20 by lemarino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
// a-z=65-90  A-Z=97-122
/* int	main(void)
{
	int	art = -1;
	
	printf("%d\n", ft_isalpha(art));
	printf("%d\n", isalpha(art));
} */
