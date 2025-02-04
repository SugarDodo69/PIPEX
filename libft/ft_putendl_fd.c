#include "libft.h"

size_t	ft_putendl_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	if (fd)
	{
		i += write(fd, s, ft_strlen(s));
		i += write(fd, "\n", 1);
	}
	return (i);
}
