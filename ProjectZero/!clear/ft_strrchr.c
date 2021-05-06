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
