#include "libft.h"
//Returns a pointer to the first occurrence of the character c in the string s.
char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	chr;

	chr = (char)c;
	i = 0;
	while (s[i])
	{
		if (s[i] == chr)
			return ((char *)&s[i]);
		i++;
	}
	if (chr == 0)
		return ((char *)(s + i));
	return (NULL);
}
