#include <string.h>
#include <stdio.h>

size_t ft_strlen (const char *str)
{
	size_t i; //чтобы совпадало с типом функции

	i = 0;
	while(str[i] != '\0')
		{
			i++;
		}
	return i;	
}

int main()
{
	const char x[15] = "123456780";

	printf("m-Dlinna stroki %s - %d simvolov\n", x, (int)ft_strlen(x));
	printf("o-Dlinna stroki %s - %d simvolov\n", x, (int)strlen(x));
	
	return (0);
}
