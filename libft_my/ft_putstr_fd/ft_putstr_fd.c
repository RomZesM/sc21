/*
Function name ft_putstr_fd
Prototype void ft_putstr_fd(char *s, int fd);
Turn in files -
Parameters #1. The string to output.
			#2. The file descriptor on which to write.
Return value None
External functs. write
		Description Outputs the string ’s’ to the given file descriptor.
*/

#include <unistd.h>
#include <fcntl.h>

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s && s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
}

int main()
{
	int file;
	char *c = "Probnaya Stroka!";


	file = open("test", O_RDWR);
	ft_putstr_fd(c, file);
	return(0);

}
