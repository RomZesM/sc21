/*

char *strrchr(const char *s, int c);

str – указатель на строку, в которой будет осуществляться поиск.
ch – код искомого символа.

Возвращаемое значение: Указатель на искомый символ,
если он найден в строке str, иначе NULL.

Описание: Функция strchr ищет последнее вхождения символа,
код которого указан в аргументе ch, в строке, на которую указывает аргумент str.
*/
#include <stdio.h>

size_t ft_strlen (const char *str)
{
	size_t i; //чтобы совпадало с типом функции

	i = 0;
	while(str[i] != '\0')
		{
			i++;
		}
	return i;
}


char *ft_strrchr(const char *s, int c)
{
	//int i;
	int d;
	char *str;

	str = (char *)s;
	//i = 0;

	d = (int)ft_strlen(str);

	while(d >= 0)
		{
			if(str[d] == c)
				return (&str[d]);
			else
				d--;
		}
	return (NULL);
}

int main (void)
{

   char str [11] = "0163456769";
   int ch = '3';

   char *ach;


   ach=ft_strrchr(str,ch);

   // Выводим результат на консоль
   if (ach==NULL)
      printf ("Символ в строке не найден\n");
   else
      printf ("Искомый символ в строке на позиции # %ld\n",ach-str+1);

   return 0;
}
