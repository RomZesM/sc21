#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (d < s)
	{
		ft_memcpy(dst, src, len);
	}
	else if (s < d)
		while (len--)
			d[len] = s[len];
	return (dst);
}
