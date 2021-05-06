#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		n = 147483648;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = n * -1;
	}
	if (n < 10 && n >= 0)
	{
		ft_putchar_fd ((n + '0'), fd);
	}
	else
	{
		ft_putnbr_fd ((n / 10), fd);
		ft_putchar_fd ((n % 10 + '0'), fd);
	}
}
