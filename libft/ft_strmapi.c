/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemarino <lemarino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 15:37:28 by lemarino          #+#    #+#             */
/*   Updated: 2025/02/12 18:39:15 by lemarino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// The function f to each character of the string s, passing
//  its index as the first argument and the character itself as the second.
//A new string is created (using malloc()) to collect the results 
//  from the successive applications of f.
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*r;

	i = 0;
	r = ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!r)
		return (NULL);
	while (s[i])
	{
		r[i] = f(i, s[i]);
		i++;
	}
	return (r);
}
