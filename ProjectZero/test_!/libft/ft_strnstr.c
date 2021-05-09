#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	b;
	size_t	n;
	size_t	l;

	b = 0;
	l = ft_strlen((char *)needle);
	if (l == 0)
		return ((char *)haystack);
	n = 0;
	while (haystack[b] != '\0' && b < len)
	{
		if (haystack[b] == needle[n])
		{
			while (haystack[b + n] == needle[n] && (b + n) < len)
			{
				n++;
				if (needle[n] == '\0')
					return ((char *)haystack + b);
			}
		}
		b++;
	}
	return (0);
}
