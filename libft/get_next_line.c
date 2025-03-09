/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemarino <lemarino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 15:02:09 by lemarino          #+#    #+#             */
/*   Updated: 2025/03/04 14:48:35 by lemarino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_appenduntil(const char *src, int c)
{
	char	chr;
	char	*dst;
	size_t	i;
	size_t	j;

	chr = (char)c;
	i = 0;
	j = 0;
	while (src[i] != chr && src[i])
		i++;
	if (i == 0 && src[i] == '\0')
		return (NULL);
	i++;
	dst = malloc(i + 1);
	if (!dst)
		return (free(dst), NULL);
	while (j < i)
	{
		dst[j] = src[j];
		j++;
	}
	dst[j] = '\0';
	return (dst);
}

// Lines 55 to 58 remove empty lines  
static char	*ft_store_excess(char *buf)
{
	char	*temp_storage;
	size_t	l;
	size_t	i;

	i = 0;
	if (!buf)
		return (NULL);
	if (!ft_strchr2(buf, '\n'))
		return (NULL);
	l = ft_strlen(ft_strchr2(buf, '\n'));
	while (buf[i] && buf[i] != '\n')
		i++;
	if (ft_strlen(buf) == i + 1)
		return (NULL);
	else
	{
		temp_storage = ft_strdup(ft_strchr2(buf, '\n'));
		if (!ft_strchr2(buf, '\n'))
			return (free(temp_storage), temp_storage = NULL, NULL);
		temp_storage[l] = '\0';
		return (temp_storage);
	}
}

static char	*ft_reading_line(char *buf, char *storage, int fd)
{
	char	*t_buf;
	ssize_t	bytes_read;

	if (!storage)
		storage = ft_strdup("");
	buf = ft_strdup(storage);
	free (storage);
	storage = NULL;
	if (ft_strchr2(buf, '\n'))
		return (buf);
	while (1)
	{
		t_buf = ft_calloc(BUFFER_SIZE + 1, 1);
		if (!t_buf)
			return (free(t_buf), t_buf = NULL, NULL);
		bytes_read = read(fd, t_buf, BUFFER_SIZE);
		if (bytes_read < 0)
			return (free(t_buf), t_buf = NULL, free(buf), buf = NULL, NULL);
		buf = ft_strjoin(buf, t_buf);
		if (bytes_read == 0 || ft_strchr2(buf, '\n'))
			return (free(t_buf), t_buf = NULL, buf);
		free(t_buf);
	}
}

char	*get_next_line(int fd)
{
	char		*buf;
	char		*temp;
	static char	*storage[1024];

	buf = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buf = ft_reading_line(buf, storage[fd], fd);
	if (!buf)
		return (NULL);
	storage[fd] = ft_store_excess(buf);
	temp = ft_appenduntil(buf, '\n');
	return (free(buf), buf = NULL, temp);
}
