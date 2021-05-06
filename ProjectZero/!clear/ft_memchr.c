#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	symbol;

	str = (unsigned char *)s;
	symbol = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == symbol)
			return (&str[i]);
		else
			i++;
	}
	return (NULL);
}
