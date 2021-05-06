#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcat (char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	c;

	i = ft_strlen(dst);
	c = 0;
	while (c < dstsize)
	{
		dst[i] = src[c];
		c++;
	}
	dst[i] = '\0';
	return (i + ft_strlen(src));
}
