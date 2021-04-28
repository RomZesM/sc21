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
	size_t i; //чтобы совпадало с типом функции

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
	size_t i;
	size_t c1;
	size_t c2;


	i = (ft_strlen(s1) + ft_strlen(s2) + 1);
	cont = (char *)malloc(sizeof(s1) * i);
	while(c1 < i)
		{
			cont[i] = 
		}
}