/*
char *strchr (const char *str, int ch)
str – указатель на строку, в которой будет осуществляться поиск.
ch – код искомого символа.

возвращает указатель на искомый символ, если он найден в строке str, иначе NULL.

Функция strchr ищет первое вхождения символа, код которого указан в аргументе ch, в строке, на которую указывает аргумент str.
*/
#include <string.h>
#include <stdio.h>

char	*ft_strchr (const char *str, int ch)
{
	int		i;
	char	*b;

	b = (char *)str;
	i = 0;
	while (b[i] != '\0')
	{
		if (b[i] == ch)
			return (&b[i]);
		else
			i++;
	}
	if (b[i] == ch)
		return (&b[i]);
	return (NULL);
}

int main()
{
	const char str[7] = "1234567";
	char *find;

	find = ft_strchr(str,'3');

	if(find != NULL)
		printf("Naydeno sovpadenie\n");
	else
		printf("Simvol ne naiden\n");
	return (0);
}
