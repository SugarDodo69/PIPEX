/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_words.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemarino <lemarino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 15:07:19 by lemarino          #+#    #+#             */
/*   Updated: 2025/03/03 17:54:12 by lemarino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(const char *str, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (str[i])
	{
		while ((str[i] && str[i] == c) || str[i] == '\n')
			i++;
		if (str[i])
			words++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (words);
}
