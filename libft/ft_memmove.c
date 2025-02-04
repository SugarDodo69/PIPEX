#include "libft.h"
// The memmove() function copies n bytes from memory area src to memory area dest.  The memory areas may overlap:
//        copying takes place as though the bytes in src are first copied into a temporary array that does  not  overlap
//        src or dest, and the bytes are then copied from the temporary array to dest.
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;
	int			i;

	i = 0;
	s = src;
	d = dest;
	if (!(d) && !(s))
		return (NULL);
	while (n > 0)
	{
		if (d < s)
		{
			d[i] = s[i];
		}
		else
		{
			d[n - 1] = s[n - 1];
		}
		i++;
		n--;
	}
	return (d);
}
