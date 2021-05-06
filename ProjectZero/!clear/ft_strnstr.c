#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	b;
	size_t	n;

	b = 0;
	if (!haystack || !needle)
		return (NULL);
	if (!needle || !needle[0])
		return ((char *)haystack);
	while (haystack[b] != '\0' && b <= len)
	{
		n = 0;
		while (haystack[b + n] && needle[n] && haystack[b + n] == needle[n])
			n++;
		if (!needle[n])
			return ((char *)haystack + b);
		b++;
	}
	return (NULL);
}
