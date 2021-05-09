#include "libft.h"

char	*ft_strchr (const char *str, int ch)
{
	int		i;
	char	*b;

	b = (char *)str;
	i = 0;
	while (b[i] != '\0')
	{
		if (b[i] == ch)
			return (&b[i]);
		else
			i++;
	}
	if (b[i] == ch)
		return (&b[i]);
	return (NULL);
}
