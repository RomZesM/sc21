/*
int
     isalpha(int c);

DESCRIPTION
     The isalpha() function tests for any character for which isupper(3) or islower(3) is true.  The value of the argument must be
     representable as an unsigned char or the value of EOF.

RETURN VALUES
     The isalpha() function returns zero if the character tests false and returns non-zero if the character tests true.

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

int main()
{
	char c[] = "1";

	if(ft_isalpha(c[0]))
		printf("Это буква\n");
	else
		printf("Это ни фига не буква\n");

	if(isalpha(c[0]))
		printf("Это буква\n");
	else
		printf("Это ни фига не буква\n");

	return (0);


}
