/*
int ft_atoi(const char *str);

Функция atoi конвертирует строку, на которую указывает параметр str, в величину типа int.
Строка должна содержать корректную запись целого числа.
В противном случае возвращается 0. Число может завершаться любым символом, который не может входить в состав строкового представления целого числа.
Сюда относятся пробелы, знаки пунктуации и другие знаки, не являющиеся цифрами.
 
*/
#include <stdio.h>
#include <stdlib.h>

int ft_atoi(const char *str)

{
    int i;
    int c;
    int m;


    c = 0;
    m = 1;
    i = 0;

    while(str[c] != '\0')
        {

            if( str[c] == '-')
                    {
                    m = m * -1;
                    c++;
                    continue;
                    }
            if(str[c] <= '9' && str[c] >= '0')
                i = i * 10 + (str[c] - '0');
            else
            	break;
            c++;
        }
    return (i * m);
}

int main ()
{

    const char str[300] = "z-21474836f8";

    printf("%i\n", ft_atoi(str));
    printf("%i\n", atoi(str));
    return (0);
}
