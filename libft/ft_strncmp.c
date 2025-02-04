#include "libft.h"
//Compares the first (at most) n bytes of the two strings s1 and s2. It returns an integer less than, equal to, or greater than zero if  s1  is
//     found, respectively, to be less than, to match, or be greater than s2.
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] && s2[i])
	{
		if ((unsigned char)s1[i] - (unsigned char)s2[i] > 0)
			return (1);
		else if ((unsigned char)s1[i] - (unsigned char)s2[i] < 0)
			return (-1);
		else
			i++;
	}
	if (i < n)
		return ((unsigned char)s1[i] - (unsigned char) s2[i]);
	return (0);
}
