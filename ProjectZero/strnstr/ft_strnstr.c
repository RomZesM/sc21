/*
The strnstr ();
function locates the first occurrence of the null-terminated string Fa little in the string Fa big ,
 where not more than Fa len characters are searched. Characters that appear after a `\0' character are not searched. Since the strnstr ();
function is a Fx specific API, it should only be used when portability is not a concern.  

	char * strnstr (const char *big const char *little size_t len);

	If Fa little is an empty string, Fa big is returned; if Fa little occurs nowhere in Fa big , 
	NULL is returned; otherwise a pointer to the first character of the first occurrence of Fa little is returned. 

 The  strstr()  function  finds the first occurrence of the substring needle in the string haystack.
       The terminating null bytes ('\0') are not compared.

*/
#include <stdio.h>


char * ft_strnstr (const char *haystack, const char *needle, size_t len)
{
	size_t b;
	size_t n;

	b = 0;

	if (!haystack || !needle)
		return (NULL);
	if(!needle || !needle[0]) //что значит !needle[0], вероятно иммется ввиду что он пуст
		return((char *)haystack);
	
	while (haystack[b] != '\0' && b <= len)
	{
		n = 0;
		while(haystack[b + n] && needle[n] && haystack[b + n] == needle[n])
				n++;
		if(!needle[n])
			return((char *)haystack + b);	
		b++;	 
	}
	return(NULL);
}

int main()
{
	const char big[20] = "77755777707555777";
	const char little[4] = "555";

	printf("Найдено следующее совпадение - %s\n", ft_strnstr(big, little, 15));

	return (0);
}