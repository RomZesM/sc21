/*
ft_strmapi
Prototype char *ft_strmapi(char const *s, char (*f)(unsigned int, char));

	Parameters 	#1. The string on which to iterate.
	Param 		#2. The function to apply to each character.
Return value The string created from the successive applications of ’f’. Returns NULL if the allocation fails.
External functs. malloc

======маллочим строку, затем  применяем к каждому символу принятой строки функцию, которую мы так же получаем извне, согласно прототипу
и полученный результат записываем в замоллоченную строку.
Description Applies the function ’f’ to each character of the string ’s’ to create a new string (with malloc(3))
resulting from successive applications of ’f’.
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

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int i;
	char * string;

	string = (char *)malloc(sizeof(s) * ft_strlen(s));
	if(!string)
		return (NULL);
	i = 0;
	while(s[i] != '\0')
		{
		string[i] = f(i, s[i]);
		i++;
		}
	string[i] = '\0';	//в задании не указано, но скорее всего строка должна закончиться 0, иначе откуда от возьмется
	return(string);
}
