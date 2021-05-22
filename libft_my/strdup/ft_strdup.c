/*
char *      strdup(const char *s1);

The strdup() function allocates sufficient memory for a copy of the string s1, does the copy, and returns a pointer to it.  The
     pointer may subsequently be used as an argument to the function free(3).

     If insufficient memory is available, NULL is returned and errno is set to ENOMEM. -- не знаю,надо ли это делать в своей функции
*/

#include <string.h>
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

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	size_t	i;
	size_t	size_m;

	size_m = ft_strlen(s1);
	ptr = (char *)malloc(size_m + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < size_m)
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

int main()
{
	char str[10] = "Paralel77";
	char * s;

	s = ft_strdup(str);

	printf("Returned copy %s\n", s);
	free(s);
	return (0);
}
