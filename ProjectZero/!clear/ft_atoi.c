#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	unsigned long long	i;
	int					c;
	int					m;

	c = 0;
	m = 1;
	i = 0;
	while (str[c] == ' ' || str[c] == '\f' || str[c] == '\n'
		|| str[c] == '\r' || str[c] == '\t' || str[c] == '\v')
		c++;
	if (str[c] == '-')
		m = -1;
	if (str[c] == '-' || str [c] == '+')
		c++;
	while (str[c] >= '0' && str[c] <= '9')
	{
		i = i * 10 + (str[c] - '0');
		c++;
	}
	if (i >= 9223372036854775807)
	{
		if (m == 1)
			return (-1);
		return (0);
	}
	return (i * m);
}
