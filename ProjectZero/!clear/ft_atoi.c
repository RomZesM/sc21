#include "libft.h"

int	ft_atoi(const char *str)

{
	int	i;
	int	c;
	int	m;

	c = 0;
	m = 1;
	i = 0;
	while (str[c] != '\0')
	{
		if (str[c] == '-')
		{
			m = m * -1;
			c++;
			continue ;
		}
		if (str[c] <= '9' && str[c] >= '0')
			i = i * 10 + (str[c] - '0');
		else
			break ;
		c++;
	}
	return (i * m);
}
