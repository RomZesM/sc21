/*
arr1, arr2 – указатели на сравниваемые массивы.
n – размер сравниваемой части массива в байтах.

Возвращаемое значение: 0 – если сравниваемые части массивов идентичны.

Положительное число, если при сравнении массивов встретился отличный байт и байт из массива, на который указывает аргумент arr1,
 больше байта из массива, на который указывает аргумент arr2.

Отрицательное число, если при сравнении массивов встретился отличный байт и байт из массива, на который указывает аргумент arr1,
меньше байта из массива, на который указывает аргумент arr2.

Функция memcmp побайтно сравнивает два массива (области памяти), на которые указывают аргументы arr1 и arr2.
Каждый байт массива определяется типом unsigned char. Сравнение продолжается,
пока не будут проверено n байт или пока не встретятся отличающиеся байты.
*/

#include <stdio.h>
#include <string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	unsigned char * str1;
	unsigned char * str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if(str1[i] - str2[i] > 0)
			return(str1[i] - str2[i]);
		if(str1[i] - str2[i] < 0)
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
int main (void)
{
   // Исходные массивы
   char *src = "\xff\xaa\xde\200";
   char *dst = "\xff\xaa\xde\0";
	int i;
	int i2;
	size_t size = 8;
	i = memcmp(src, dst, size);
	i2 = ft_memcmp(src, dst, size);
	printf("memcmp - %d\n", i);
	printf("ft_memcmp - %d\n", i2);

   if (ft_memcmp (src, dst, 10) == 0)
      puts ("m - Области памяти идентичные.\n");
   else
      puts ("m - Области памяти отличаются.\n");

	if (memcmp (src, dst, 10) == 0)
      puts ("o-Области памяти идентичные.\n");
   else
      puts ("o-Области памяти отличаются.\n");

   return 0;
}
