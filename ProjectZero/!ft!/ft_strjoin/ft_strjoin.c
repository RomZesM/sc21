/*
Prototype char *ft_strjoin(char const *s1, char const *s2);

Parameters 	#1. The prefix string.
			#2. The suffix string.

Return value The new string. NULL if the allocation fails. External functs. malloc
Description Allocates (with malloc(3)) and returns a new string, which is the result
 of the concatenation of ’s1’ and ’s2’.
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


char *ft_strjoin(char const *s1, char const *s2)
{
	char * cont;
	size_t c1;
	size_t c2;

	cont = (char *)malloc(sizeof(s1) * (ft_strlen(s1) + 1));
	if(!cont)
		return(NULL);
	c1 = -1;
	c2 = -1;
	while(++c1 < ft_strlen(s1)) //вероятно, если использовать инты для хранения значения длинны строки то будет быстрее
		{
			*(cont + c1) = *(s1 + c1);
		}
		//после порохождения 1 цикла, с1 будет равнна длинне 1 массива, и дальше запист продолжится вместо \0
	while(++c2 < ft_strlen(s2))
		{
			*(cont + c1++) = *(s2 + c2); //постфиксный + имеет приоритет над обычным плюсом, значит с1 сначала увеличивается, затем прибавляется к count
		}
	*(cont + c1) = "\0";
	return (cont);
}

int main()
{
const char s1[5] = "7777";
const char s2[5] = "8888";
char *ret;
ret = ft_strjoin(s1, s2);

printf("Returned string - %s\n", ret);
//free(ret);

return (0);
}
