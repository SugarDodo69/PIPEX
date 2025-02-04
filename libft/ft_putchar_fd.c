#include "libft.h"

size_t	ft_putchar_fd(char c, int fd)
{
	if (fd)
		return (write(fd, &c, 1));
	else
		return (0);
}

/* 
0 <= fd <= 1024
0	Represents standard input.
1	Represents standard output.
2	Represents standard error.
3~9	Writes whitin a specific file.
10 >>	writes whitin several files.
*/
