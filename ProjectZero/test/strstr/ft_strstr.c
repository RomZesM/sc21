/*
 #include <string.h>

       char *strstr(const char *haystack, const char *needle);

  DESCRIPTION
       The  strstr()  function  finds the first occurrence of the substring needle in the string haystack.
       The terminating null bytes ('\0') are not compared.

RETURN VALUE
       These functions return a pointer to the beginning of the located substring, or  NULL  if  the  sub‐
       string is not found.
If Fa little is an empty string, Fa big is returned; if Fa little occurs nowhere in Fa big , NULL is returned;
 otherwise a pointer to the first character of the first occurrence of Fa little is returned.  
*/
#include <stdio.h>

char *ft_strstr(const char *haystack, const char *needle)
{
	size_t i;
	size_t c;

	i = 0;
	
	
	if(!needle) //если массив пуст
		return(NULL);
	while(haystack[i] != '\0')
		{
			c = 0; //объяаление переменной внутри while, чтобы обнуляться при входе в цикл, ели найдено не полное совпадение
			while(haystack[i + c] && needle[c] && haystack[i + c] == needle[c]) //в этом блоке ЕСЛИ найдено совпадение i + 0 с 0 символом массива needle,
				   															//входим в цикдл, для проверки на последующие совпадения с needl
				c++;
			if (!needle[c]) //если массив нидл пройден до конца, значит предыдущий цикл отработал, совадение найдено, можно вернуть указатель на начало 
							//совпадения
				return((char *)(haystack + i));
				
			i++;	//если в цикл по совпадениям не зашел, то проверяем со следующей буквы
		}
	return(NULL);
}

int main()
{
	const char big[20] = "77777777777555777";
	const char little[4] = "555";

	printf("Найдено следующее совпадение - %s\n", ft_strstr(big, little));

	return (0);
}
