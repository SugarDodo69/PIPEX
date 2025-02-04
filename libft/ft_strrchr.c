#include "libft.h"
// Returns a pointer to the last occurrence of the character c in the string s.
char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	if ((char)c == 0)
		return ((char *)s);
	return (NULL);
}
