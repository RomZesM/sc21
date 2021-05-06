#include "libft.h"

void	*ft_memcpy (void *destination, const void *source, size_t n)
{
	char			*d;
	const char		*s;
	unsigned int	c;

	d = destination;
	s = source;
	c = 0;
	if (!s || !n || !source)
		return (NULL);
	while (c < n)
	{
		d[c] = s[c];
		c++;
	}
	d[c] = '\0';
	return (d);
}
