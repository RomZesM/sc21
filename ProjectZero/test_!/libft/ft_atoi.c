#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned long long	i;
	int					m;

	m = 1;
	i = 0;
	while (*str == ' ' || *str == '\f' || *str == '\n'
		|| *str  == '\r' || *str == '\t' || *str == '\v')
		str++;
	if (*str == '-')
		m = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		i = i * 10 + (*str - '0');
		str++;
	}
	if (i >= 9223372036854775807)
	{
		if (m == 1)
			return (-1);
		return (0);
	}
	return (i * m);
}
