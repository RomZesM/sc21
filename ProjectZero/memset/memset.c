/*
#include < string.h >
void *memset (void *destination, int c, size_t n);

Аргументы:

destination – указатель на заполняемый массив
с – код символа для заполнения
n – размер заполняемой части массива в байтах
Возвращаемое значение:

Функция возвращает указатель на заполняемый массив.

Описание:

Функция memset заполняет первые n байт области памяти, на которую указывает аргумент destination, символом, код которого указывается аргументом c.
пробуем изменить
*/

#include <unistd.h>
#include <stdio.h>

char ft_memset(char * destination, int c, size_t n)
{
	unsigned int i;
	char g;

	i = 0;
	g = *destination;

	while (i <= n - 1)
	{
		destination[i] = c;
		i++;
	}	
	return (g);
}

int main()
{
	char str[] = "1234567890";
	int d;
	d = 6;
	ft_memset(str, '1', d);
	printf("Changing string - %s\n", str);
	return (0);
}