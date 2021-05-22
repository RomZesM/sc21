/*
     The isprint() function tests for any printing character, including space (` ').  The value of the argument must be repre-
     sentable as an unsigned char or the value of EOF.

     In the ASCII character set, this includes the following characters (preceded by their numeric values, in octal):
*/

#include <ctype.h>
#include <stdio.h>

int ft_isprint(int c)
{
	if(c >= 32  && c <= 126)
		return (1);
	else 
		return 0;
}

int main()
{
	char c[] = "f";
	
	if(ft_isprint(c[0]))
		printf("Это ASCII\n");
	else
		printf("Это ни фига не ASCII\n");

	if(isprint(c[0]))
		printf("Это ASCII\n");
	else
		printf("Это ни фига не ASCII\n");

	return (0);


}	