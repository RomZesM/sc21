#include "libft.h"

size_t	ft_strlcat (char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	d;
	size_t	s;

	i = 0;
	d = ft_strlen(dst);
	s = ft_strlen(src);
	if (d > dstsize)
		s = s + dstsize;
	else
	{
		s = s + d;
		while (src[i] != '\0' && d < dstsize - 1)
			dst[d++] = src[i++];
		dst[d] = '\0';
	}
	return (s);
}
