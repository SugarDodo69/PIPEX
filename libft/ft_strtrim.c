#include "libft.h"
//Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters specified in ’set’
//	removed from the beginning and the end of the string.
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		start;
	size_t		end;
	char		*s2;

	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > 0 && ft_strchr(set, s1[end]))
		end--;
	s2 = ft_substr(s1, start, end - start + 1);
	return (s2);
}
