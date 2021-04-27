/*
int ft_strncmp(const char *s1, const char *s2, size_t n);

Функция strncmp побайтно сравнивает коды символов двух строк, на которые указывают аргументы функции. 
Сравнение прекращается если встретились отличающиеся символы. При этом возвращается отрицательное или положительное число 
(Положительное число – если строки отличаются и код первого отличающегося символа в строке s1 больше кода символа на той же позиции в строке s2. 
Отрицательное число – если строки отличаются и код первого отличающегося символа в строке s1 меньше кода символа на той же позиции в строке s2.).
 Если были проверены n символов или обе сравниваемые строки закончились, и отличий не было, то сравнение прекращается и возвращается ноль.
*/
#include <stdio.h>
#include <string.h>


int ft_strncmp (const char *s1, const char *s2, size_t n)
{
  size_t counter;
  counter = 0;
  printf ("pered %lu\n", n);
  while ((s1[counter] != '\0' || s2[counter] != '\0') && counter < n)
    {
      if (s1[counter] > s2[counter] || s1[counter] < s2[counter])
	{
	  return (s1[counter] - s2[counter]);
	}
      counter++;
    }
  return 0;
}

int main ()
{
  unsigned int n;
  n = 10;

  char s1[] = "1234567772";
  char s2[] = "1234567775";

  printf ("%d\n", ft_strncmp (s1, s2, n));
  printf ("%d\n", strncmp (s1, s2, n));
  
  return 0;

}