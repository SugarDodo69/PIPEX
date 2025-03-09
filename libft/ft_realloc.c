/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemarino <lemarino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 16:51:20 by lemarino          #+#    #+#             */
/*   Updated: 2025/03/06 12:45:18 by lemarino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Changes the size of the memory block pointed to by ptr to size bytes.
The contents will be unchanged in the range from the start of the region up 
to the minimum of the old and new sizes. If the new size is larger than the
old size, the  added memory will not be initialized. If  ptr is NULL,
then the call is equivalent to malloc(size), for all values of size; if size is
equal to zero, and ptr is not NULL, then the call is equivalent to free(ptr).
Unless ptr is NULL, it must have been re turned by an earlier call to malloc(),
calloc(), or realloc().*/
void	*ft_realloc(void *ptr, size_t old_size, size_t size)
{
	void	*new_ptr;

	new_ptr = NULL;
	if (ptr == NULL)
		return (ft_calloc(size, sizeof(ptr)));
	if (!size)
		return (ptr);
	new_ptr = ft_calloc(size, sizeof(ptr));
	if (!new_ptr)
		return (NULL);
	if (old_size < size)
		ft_memcpy(new_ptr, ptr, old_size);
	else
		ft_memcpy(new_ptr, ptr, size);
	free(ptr);
	return (new_ptr);
}
