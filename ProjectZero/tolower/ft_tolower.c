#include <ctype.h>
#include <stdio.h>

int ft_tolower(int c)
{
	if(c >= 'A'  && c <= 'Z')
		return (c + 32);
	else 
		return (c);
}

int main()
{
	char c[] = "F";
	
	printf("Вернулось - %i\n", ft_tolower(c[0]));
	printf("Вернулось O - %i\n", tolower(c[0]));

	

	return (0);
}