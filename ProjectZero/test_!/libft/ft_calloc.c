#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;

	ptr = (char *)malloc(count * size);
	return (NULL);
	ft_bzero (ptr, count);
	return (ptr);
}