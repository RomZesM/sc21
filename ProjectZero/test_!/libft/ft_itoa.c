#include "libft.h"

int	str_count(int str)
{
	int	i;

	i = 1;
	while ((str = str / 10))
		i++;
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i2;
	int		buf;

	i2 = str_count(n);
	buf = n;
	if (n < 0)
	{
		buf = -n;
		i2++;
	}
	str = (char *)malloc(sizeof(char) * i2);
	if (!str)
		return (NULL);
	str[--i2] = (buf % 10) + 48;
	while (buf /= 10)
		str[--i2] = (buf % 10) + 48;
	if (n < 0)
	{
		*(str + 0) = '-';
	}
	return (str);
}
