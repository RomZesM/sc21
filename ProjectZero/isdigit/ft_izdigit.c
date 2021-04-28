/*
int
     isdigit(int c);

DESCRIPTION
     The isdigit() function tests for a decimal digit character.  Regardless of locale, this includes the following characters only:

RETURN VALUES
     The isdigit() and isnumber() functions return zero if the character tests false and return non-zero if the character tests
     true.
	
*/

#include <ctype.h>
#include <stdio.h>

int ft_isdigit(int c)
{
	if(c >= '0'  && c <= '9')
		return (1);
	else 
		return 0;
}

int main()
{
	char c[] = "o";
	
	if(ft_isdigit(c[0]))
		printf("Это цифра\n");
	else
		printf("Это ни фига не цифра\n");

	if(isdigit(c[0]))
		printf("Это цифра\n");
	else
		printf("Это ни фига не цифра\n");

	return (0);


}	
