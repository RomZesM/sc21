#include "libft.h"

void	*ft_memset(void *destination, int c, size_t n)
{
	size_t			i;
	unsigned char	*g;

	i = 0;
	g = (unsigned char *)destination;
	while (i < n)
	{
		g[i] = c;
		i++;
	}
	return (g);
}
