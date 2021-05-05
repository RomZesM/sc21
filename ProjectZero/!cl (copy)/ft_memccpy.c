#include <libft.h>

void	*ft_memccpy(void *destination, const void *source, int c, size_t n)
{
	unsigned char		*d;
	unsigned char		*s;
	unsigned char		symbol;
	unsigned int		i;

	symbol = (unsigned char)c;
	d = (unsigned char *)destination;
	s = (unsigned char *)source;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		if (s[i] == symbol)
			return (&d[i]);
		i++;
	}
	return (d);
}
