/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemarino <lemarino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 12:31:57 by lemarino          #+#    #+#             */
/*   Updated: 2025/02/12 18:37:13 by lemarino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Allocates (with malloc()) and returns a new string,
// which is the result of the concatenation of ’s1’ and ’s2’.
char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t			i;
	size_t			j;
	char			*new;

	i = 0;
	j = 0;
	new = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (new == NULL)
		return (NULL);
	while (s1[i])
	{
		new[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		new[i] = s2[j];
		j++;
		i++;
	}
	new[i] = '\0';
	free((char *)s1);
	return (new);
}
