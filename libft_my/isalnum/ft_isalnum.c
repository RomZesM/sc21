/*
isalnum -- alphanumeric character test

     #include <ctype.h>

     int     isalnum(int c);

DESCRIPTION
     The isalnum() function tests for any character for which isalpha(3) or isdigit(3) is true.  The value of the argument must be
     representable as an unsigned char or the value of EOF.

*/

#include <ctype.h>
#include <stdio.h>

int ft_isalpha(int c)
{
	if(c >= 'A'  && c <= 'Z')
		return (1);
	if(c >= 'a'  && c <= 'z')
		return (1);
	else 
	return 0;
}

int ft_isdigit(int c)
{
	if(c >= '0'  && c <= '9')
		return (1);
	else 
		return 0;
}

int	ft_isalnum(int c)
{
	if(ft_isalpha(c) || ft_isdigit(c))
		return(1);
	else
		return (0);
}



int main()
{
	char c[] = "z";
	
	if(ft_isalnum(c[0]))
		printf("Это или буква или цифра\n");
	else
		printf("Это ни фига не или буква или цифра\n");

	if(isalnum(c[0]))
		printf("Это или буква или цифра\n");
	else
		printf("Это ни фига не или буква или цифра\n");

	return (0);
}
