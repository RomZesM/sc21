/*
int ft_atoi(const char *str);

Функция atoi конвертирует строку, на которую указывает параметр str, в величину типа int.
Строка должна содержать корректную запись целого числа.
В противном случае возвращается 0. Число может завершаться любым символом, который не может входить в состав строкового представления целого числа.
Сюда относятся пробелы, знаки пунктуации и другие знаки, не являющиеся цифрами.

*/
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	unsigned long long i;
	int c;
	int m;

	c = 0;
	m = 1;
	i = 0;
	while (str[c] == ' ' || str[c] == '\f' || str[c] == '\n'
				|| str[c] == '\r' || str[c] == '\t' || str[c] == '\v')
			c++;
	if (str[c] == '-')
		m = -1;
	if (str[c] == '-' || str [c] == '+')
		c++;
	while (str[c] >= '0' && str[c] <= '9')
	{
		i = i * 10 + (str[c] - '0');
		c++;
	}
	if (i >= 9223372036854775807)
	{
		if (m == 1)
			return (-1);
		return (0);
	}
	return (i * m);
}

int main ()
{

	const char *str = "214748368";

	printf("%i\n", ft_atoi(str));
	printf("%i\n", atoi(str));
	return (0);
}
