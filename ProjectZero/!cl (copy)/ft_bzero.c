#include <libft.h>

void	ft_bzero(void *s, size_t n)
{
	size_t					i;
	unsigned char			*d;

	d = s;
	i = 0;
	while (i < n)
	{
		d[i] = '\0';
		i++;
	}
}
