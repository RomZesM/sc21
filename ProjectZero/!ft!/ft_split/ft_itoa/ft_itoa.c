/*
ft_itoa
char *ft_itoa(int n);
-
#1. the integer to convert.
		The string representing the integer. NULL if the
		allocation fails.
malloc
		Allocates (with malloc(3)) and returns a string representing the integer received as an argument.
	Negative numbers must be handled.
*/

#include <stdio.h>
#include <stdlib.h>

int str_count(int str)
{
	int i;

	i = 1;

	while ((str = str / 10)) //пока число делиться на 10, утвердительное выражение надо брать в скобки..
		i++;
	return (i);
}

char *ft_itoa(int n)
{
	char *str;
	int i;
	int i2;
	int buf;
	

	i2 = str_count(n);
	printf("Dlinna chisla - %i\n", i2);
	buf = n;
	if (n < 0)
		{
			buf = -n;
			i2++;
		}
	str = (char *)malloc(sizeof(char) * (i2 + 1));
	if(!str)
		return(NULL);
	while ( > 10)
		{
			str[i] = (n % 10) + 48;
			n = n / 10;
			i++;
		}
	if (n < 10)
		{
		str[i] = n + 48;
		str[i + 1] = '\0';
		}
	return (str);
}

int main()
{
	int c = -128;
	printf("Retuned Array - %s\n", ft_itoa(c));
	return (0);

}
