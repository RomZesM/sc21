#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*cont;
	size_t	c1;
	size_t	c2;

	cont = (char *)malloc(sizeof(s1) * (ft_strlen(s1) + 1));
	if (!cont)
		return (NULL);
	c1 = -1;
	c2 = -1;
	while (++c1 < ft_strlen(s1))
	{
		*(cont + c1) = *(s1 + c1);
	}
	while (++c2 < ft_strlen(s2))
	{
		*(cont + c1++) = *(s2 + c2);
	}
	return (cont);
}
