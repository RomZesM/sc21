#include <ctype.h>
#include <stdio.h>

int ft_isascii(int c)
{
	if(c >= 0  && c <= 127)
		return (1);
	else 
		return 0;
}

int main()
{
	char c[] = "Ф";
	
	if(ft_isascii(c[0]))
		printf("Это ASCII\n");
	else
		printf("Это ни фига не ASCII\n");

	if(isascii(c[0]))
		printf("Это ASCII\n");
	else
		printf("Это ни фига не ASCII\n");

	return (0);


}	