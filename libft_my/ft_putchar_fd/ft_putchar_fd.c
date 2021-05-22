/*
Function name ft_putchar_fd
Prototype void ft_putchar_fd(char c, int fd);

Parameters 	#1. The character to output.
			#2. The file descriptor on which to write.
Return value None
External functs. write

Description Outputs the character ’c’ to the given file descriptor.
*/
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>


void ft_putchar_fd(char c, int fd)
{
		write(fd, &c, 1);
}

int main()
{
	int file;
	char c;

	c = 'a';
	printf("char = %c\n", c);
	file = open("test", O_RDWR);
	ft_putchar_fd(c, file);
	return(0);

}
