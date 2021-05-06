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

void	*ft_memset(void *destination, int c, size_t n)
{
	size_t			i;
	unsigned char	*g;
	unsigned char	b;

	i = 0;
	g = (unsigned char *)destination;
	b = (unsigned char)c;
	if (n == 0)
		return (NULL);
	while (i < n)
	{
		g[i] = b;
		i++;
	}
	return ((unsigned char *)g);
}

int main()
{
//	int k = 0;

//	char str[] = "1234567890";
//	char str2[] = "1234567890";
	char t1[0xF00];
	char t2[0xF00];


	ft_memset("", 'A', (0));

	printf("My Function - %s\n", t1);
	memset("", 'A', (0));
	printf("Original Memeset - %s\n", t2);

	return (0);
}
