#include "libft.h"

void	*ft_memccpy(void *destination, const void *source, int c, size_t n)
{
	unsigned char		*d;
	unsigned char		*s;
	unsigned char		symbol;
	size_t				i;

	symbol = (unsigned char)c;
	d = (unsigned char *)destination;
	s = (unsigned char *)source;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
		if (s[i - 1] == symbol)
			return (&d[i]);
	}
	return ((void *) 0);
}
