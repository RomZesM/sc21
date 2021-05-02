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
	while ((str = str / 10)) //пока число делиться на 10, утвердительное выражение надо брать в скобки.
		i++;
	return (i);
}

char *ft_itoa(int n)
{
	char *str;
	int i2;
	int buf;
	
	i2 = str_count(n); //вычисляем длинну строки
	buf = n;
	if (n < 0) //проверяем число на положительность, если отрицательно, добавть 1 ячейку для знака минус
		{
			buf = -n;
			i2++;
		}
	str = (char *)malloc(sizeof(char) * i2);
	if(!str)
		return(NULL);
	str[--i2] = (buf % 10) + 48; // str[--i2] согласно приоритености сначала произойдет уменьшение i2, затем ее использование
	while ( buf /= 10) //почемуто до входа в цикл отваливается последня цифра, приходится ее записать до вхождения в цикл, цикл//крутиться, пока выполняется buf \ 10 не равно 0, видимо это приравниевается к false
		str[--i2] = (buf % 10) + 48;
	if (n < 0)
		{
			*(str + 0) = '-';
		}
	return (str);
}

int main()
{
	int c = -123456789;
	printf("Retuned Array : %s\n", ft_itoa(c));
	return (0);

}
