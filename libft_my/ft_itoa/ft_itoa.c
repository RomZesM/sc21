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

size_t ft_strlen (const char *str)
{
	size_t i;

	i = 0;
	while(str[i] != '\0')
		{
			i++;
		}
	return i;
}

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	size_t	i;
	size_t	size_m;

	size_m = ft_strlen(s1);
	ptr = (char *)malloc(size_m + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < size_m)
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
char *ft_minint(char *str)
{
	const char *c;

	c = "-2147483648";
	str = ft_strdup(c);
	return (str);
}

int	str_count(int str)
{
	int	i;

	i = 0;
	if (str == 0)
		return (i + 1);
	while (str != 0) //пока число делиться на 10, утвердительное выражение надо брать в скобки.
	{
		str /= 10;
		i++;
	}
	return (i);
}

char *ft_itoa(int n)
{
	char *str;
	int i2;
	int buf;

	str = NULL;
	if (n == -2147483647 -1)
		return (ft_minint(str));
	i2 = str_count(n); //вычисляем длинну строки
	buf = n;
	if (n < 0) //проверяем число на положительность, если отрицательно, добавь 1 ячейку для знака минус
		{
			buf = n * -1;
			i2++;
		}
	str = (char *)malloc(i2 + 1);
	if(!str)
		return(NULL);
	str[i2] = '\0';
	str[--i2] = (buf % 10) + 48; // str[--i2] согласно приоритености сначала произойдет уменьшение i2, затем ее использование
	while ( buf > 0) //почемуто до входа в цикл отваливается последня цифра, приходится ее записать до вхождения в цикл, цикл//крутиться, пока выполняется buf \ 10 не равно 0, видимо это приравниевается к false
		{
		buf /= 10;
		str[--i2] = (buf % 10) + 48;
		}
	if (n < 0)
		{
			*(str + 0) = '-';
		}
	return (str);
}

int main()
{
	int c = -2147483647 -1;

	printf("Retuned Array : %s\n", ft_itoa(c));
	return (0);

}
