
#include <libft.h>

void	*ft_memset(void *destination, int c, size_t n)
{
	size_t			i;
	unsigned char	*g;
	unsigned char	b;

	i = 0;
	g = (unsigned char *)destination;
	b = (unsigned char)c;
	while (i <= n)
	{
		g[i] = b;
		i++;
	}
	return (g);
}
