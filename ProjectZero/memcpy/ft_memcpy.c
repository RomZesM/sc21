/*#include < string.h >
void *memcpy (void *destination, const void *source, size_t n);

Аргументы:

destination – указатель на массив в который будут скопированы данные.
source – указатель на массив источник копируемых данных.
n – количество байт для копирования.

Возвращаемое значение:

Функция возвращает указатель на массив, в который скопированы данные.

Описание:

Функция memcpy копирует n байт из массива (области памяти), на который указывает аргумент source, в массив (область памяти), 
на который указывает аргумент destination. Если массивы перекрываются, результат копирования будет не определен.
*/

#include <unistd.h>
#include <stdio.h>
#include <string.h>

void *ft_memcpy (void *destination, const void *source, size_t n)
{
    char *d;
    const char *s;
    unsigned int c;

    d = destination;
    s = source;

    c = 0;
    while (c < n)
        {
            d[c] = s[c];
            c++;
        }
    d[c] = '\0';
    return(d);
}

int main()
{
    char dest[10] = "";
    char dest2[10] = "";
    char source[7] = "123456";
    
    ft_memcpy(dest, source, 2);
    memcpy(dest2, source, 2);

    printf("We copy this - %s\n", dest);
    printf("ORIGINAL memcpy this - %s\n", dest2);
    return(0);
}


