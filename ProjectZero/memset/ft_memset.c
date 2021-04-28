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
	size_t i;
	unsigned char *g;
	unsigned char b;

	i = 0;
	g = (unsigned char *)destination;
	b = (unsigned char)c;

	while (i <= n)
	{
		g[i] = b;
		//*(g + i) = c;
		i++;
	}	
	return (g);
}

int main()
{
	int k = 0;
	int l;

	l = 3;
	char str[] = "1234567890";
	char str2[] = "1234567890";
	int str3[] = {1,2,3,4,5,6,7,8};
	int str4[] = {1,2,3,4,5,6,7,8};

	ft_memset(str, '7', 3);
	ft_memset(str3, '7', l);
	printf("My Function - %s\n", str);
	printf("My Function int - %i\n", *str3);
	 while (k < 9)
	 	{
			 write(1, &str3[k], 1);
			 k++;	
	 	}
	printf("\n");
	memset(str2, '7', 3);
	memset(str4, '7', l);
	printf("Original Memeset - %s\n", str2);
	printf("Original memset int - %i\n", *str4);	
	
	return (0);
}