#include "libft.h"

size_t	ft_putstr_fd(char *s, int fd)
{
	if (fd)
	{
		return (write(fd, s, ft_strlen(s)));
	}
	else
		return (0);
}
