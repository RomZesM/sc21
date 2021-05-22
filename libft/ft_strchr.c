#include "libft.h"

char	*ft_strchr (const char *str, int ch)
{
	int		i;
	char	*b;
	char	c;

	b = (char *)str;
	c = (char)ch;
	i = 0;
	while (b[i] != '\0')
	{
		if (b[i] == c)
			return (&b[i]);
		else
			i++;
	}
	if (b[i] == c)
		return (&b[i]);
	return (NULL);
}
