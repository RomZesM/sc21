/*
ft_putendl_fd
Prototype void ft_putendl_fd(char *s, int fd);
Turn in files -
Parameters 	#1. The string to output.
			#2. The file descriptor on which to write.
Return value None
External functs. write
Description Outputs the string ’s’ to the given file
descriptor, followed by a newline.
*/
#include <unistd.h>
#include <fcntl.h>

void ft_putendl_fd(char *s, int fd)
{
	int i;
	i = 0;
	while(s[i] != '\0')
		{
			write(fd, &s[i], 1);
			i++;
		}
	write(fd, "\n", 1);
}

int main()
{
	int file;
	char *c = "Probnaya Stroka!";
	
	
	file = open("test", O_RDWR);
	ft_putendl_fd(c, file);
	return(0);

}