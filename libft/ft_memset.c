#include "libft.h"
// The memset() function fills the first n bytes of the memory area pointed to by s with the constant byte c.
void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	chr;
	unsigned char	*str;

	i = 0;
	chr = (unsigned char )c;
	str = (unsigned char *)s;
	while (i < n)
	{
		str[i] = chr;
		i++;
	}
	return (s);
}
