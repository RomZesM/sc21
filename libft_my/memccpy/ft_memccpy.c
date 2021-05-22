/*Синтаксис:

#include < string.h >
void *memccpy (void *destination, const void *source, int c, size_t n);

Аргументы:

destination – указатель на массив в который будут скопированы данные.
source – указатель на массив источник копируемых данных.
c – код символа, при встрече которого копирование завершается.
n – количество байт для копирования.

Возвращаемое значение:

Функция возвращает указатель на массив, в который скопированы данные,
если скопировано n байт.
NULL если в первых n байтах массива источника встречен символ,
код которого соответствует указанному в аргументе c.

Функция memccpy копирует данные из массива (области памяти), на который указывает аргумент source, в массив (область памяти),
на который указывает аргумент destination пока не встретится символ, код которого соответствует указанному в аргументе c или пока не будет
скопировано n байт данных.

Если массивы перекрываются, результат копирования будет не определен.
 информация из мана (почему то оличаются возвращаемые значения)
   The memccpy() function copies bytes from string src to string dst.
    If the character c (as converted to an unsigned char)
     occurs in the string src, the copy stops and a pointer to
	 the byte after the copy of c in the string dst is returned.  Other-
     wise, n bytes are copied, and a NULL pointer is returned.

*/

#include <string.h>
#include <stdio.h>


void	*ft_memccpy(void *destination, const void *source, int c, size_t n)
{
	unsigned char		*d;
	unsigned char		*s;
	unsigned char		symbol;
	size_t				i;

	symbol = (unsigned char)c;
	d = (unsigned char *)destination;
	s = (unsigned char *)source;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
		if (s[i - 1] == symbol)
			return (&d[i]);
	}
	return ((void *) 0);
}



int main (void)
{
   // Массив источник данных
   unsigned char src[15]= "1234567890";
   unsigned char src2[15]= "1234567890";
   // Массив приемник данных
   unsigned char dst[15]= "";
	unsigned char dst2[15]= "";

   // Копируем данные из массива src в массив dst

   ft_memccpy(dst, src,'7', 10);
   memccpy(dst2, src2,'7', 10);

   // Вывод массива dst на консоль
   printf ("MY dst: %s\n",dst);
   printf ("OR dst: %s\n",dst2);

   return 0;
}
