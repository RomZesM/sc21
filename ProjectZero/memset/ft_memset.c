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
#include <string.h>
#include <stddef.h>

void *ft_memset(void * destination, int c, size_t n)
{
	unsigned int i;
	char *g;

	i = 0;
	g = destination;

	while (i <= n - 1)
	{
		g[i] = c;
		i++;
	}	
	return (g);
}

int main()
{
	char str[] = "1234567890";
	char str2[] = "1234567890";
	int str3[] = {1,2,3,4,5,6,7,8};
//	int str4[] = {1,2,3,4,5,6,7,8};

	ft_memset(str, '7', 3);
	ft_memset(str3, '7', 3);
	printf("My Function - %s\n", str);
	printf("My Function - %i\n", *str3);
	//printf("%s\n", ft_memset(str2, '7', 2));
	memset(str2, '7', 3);
	printf("Original Memeset - %s\n", str2);	
	//printf("Original Memeset - %s\n", memset(str2, '7', 2));
	return (0);
}