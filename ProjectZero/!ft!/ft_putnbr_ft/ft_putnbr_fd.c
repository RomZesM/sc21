/*Prototype void ft_putnbr_fd(int n, int fd);
Turn in files -
Parameters 	#1. The integer to output.
			#2. The file descriptor on which to write.
Return value None
External functs. write
Description Outputs the integer ’n’ to the given file
descriptor. */
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

void ft_putchar_fd(char c, int fd)
{
		write(fd, &c, 1);
}

void ft_putnbr_fd(int n, int fd)
{
     if(n == -2147483648)
        {
        ft_putchar_fd('-',fd);
        ft_putchar_fd('2',fd);
        n = 147483648;
        }
    
    if(n < 0)
        {
        ft_putchar_fd('-',fd);
        n = n * -1;
        }
    
    if(n < 10 && n >= 0)
        {
            ft_putchar_fd((n + '0'),fd);
        }
    else 
        {
            ft_putnbr_fd((n / 10), fd);   //отправляем результат деления на 10 (первые числа после округления
                                    // снова прогоняются через цикл, 
            
            ft_putchar_fd((n % 10 + '0'),fd);// печатаем остаток от деления на 10 (последнее числоб после рекурсии)
         }
}

int main()
{
	int file;
	int num = 1288887979;
	
	file = open("test", O_RDWR);
	ft_putnbr_fd(num, file);
	return(0);

}