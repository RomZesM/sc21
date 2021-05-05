/*
char **ft_split(char const *s, char c);
-
		#1. The string to be split.
		#2. The delimiter character.
The array of new strings resulting from the split.
NULL if the allocation fails.
malloc, free
\
получаем строку типа *Это*важное*слово*, * разделитель, разделить на отдельные слова, и записатьт каждое в массив, и вернуть

Allocates (with malloc(3)) and returns an array of strings obtained by splitting ’s’ using the
character ’c’ as a delimiter. The array must be ended by a NULL pointer.
*/

#include <stdio.h>
#include <stdlib.h>

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


char **ft_split(char const *s, char b)
{
	size_t c; //длинна исходной строки
	size_t c1;  //счетчик по исходной строке
	size_t c2; //счетчик слов, чтобы переместиться по двумерному массиву
	size_t c3; //счетчик перехода по строкам новых слов в двумерном массиве
	char **dest;

	c = ft_strlen(s);
//	dest = (char **)malloc(sizeof(char *) * )
	c1 = 1;
	c2 = 0;
	c3 = 0;

	while (s[c1] != '\0')
		{
			if(s[c1] == b);
				{
					dest[c2][c3] = '\0';
					c2++;
					c3 = 0;
				}
			dest[c2][c3] = s[c1];
			c1++;
			c2++;
		}
	return(dest);
}

int main()
{
	char c = '*';
	char const *str = "*word*word2*wprd3*";

	ft_split(str, c);
	return(0);
}
