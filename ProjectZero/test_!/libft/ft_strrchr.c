#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		d;
	char	*str;

	str = (char *)s;
	d = (int)ft_strlen(str);
	while (d >= 0)
	{
		if (str[d] == c)
			return (&str[d]);
		else
			d--;
	}
	return (NULL);
}
