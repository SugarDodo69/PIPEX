/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemarino <lemarino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 15:37:28 by lemarino          #+#    #+#             */
/*   Updated: 2025/02/24 15:15:14 by lemarino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wordlen(const char *s, char c)
{
	int		l;
	int		len;

	len = ft_strlen(s);
	l = 0;
	while (l < len && s[l] != c)
		l++;
	return (l);
}

static char	**freemtrx(char **s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		free(s[i]);
		i++;
	}
	free(s);
	return (NULL);
}

// Allocates (with malloc) and returns an array of strings obtained by
// splitting ’s’ using the character ’c’ as a delimiter.
// The array is NULL terminated.
// Returns the array of new strings resulting from the split.
// NULL if the allocation fails.
char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**r;

	i = 0;
	j = 0;
	r = ft_calloc((count_words(s, c) + 1), sizeof(char *));
	if (!r)
		return (NULL);
	while (s[i] && count_words(s, c) != 0)
	{
		while (s[i] == c)
			i++;
		r[j] = ft_substr(s, i, wordlen(&s[i], c));
		if (!r[j])
			return (freemtrx(r));
		j++;
		i += wordlen(&s[i], c);
		while (s[i] == c && s[i] != '\0')
			i++;
	}
	return (r);
}
