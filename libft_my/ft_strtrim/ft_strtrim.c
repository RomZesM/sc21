/*
ft_strtrim
char *ft_strtrim(char const *s1, char const *set);
-
	#1. The string to be trimmed.
	#2. The reference set of characters to trim.

The trimmed string. NULL if the allocation fails.
malloc

Allocates (with malloc(3)) and returns a copy of ’s1’
 with the characters specified in ’set’ removed
from the beginning and the end of the string.
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

int proverka(char const *set, char p)
{
	int i;

	i = 0;
	while (set[i])
		{
			if(set[i] == p)
				return (1);
			i++;
		}
	return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
	size_t begin;
	size_t end;
	size_t i;
	char *trim;
//считаем сколько символов с начала строки совпадает с сет

	begin = 0;
	i = 0;
	while(s1[begin] && proverka(set, s1[begin]))
			begin++;
	end = ft_strlen(s1); //находим длинну строки, и начинаем сравнивать символы с set с конца, пока не  дойдем до begin
	while(end > begin && proverka(set, s1[end - 1]))
			end--;
	trim = (char *)malloc(sizeof(trim) * ((end - begin) + 1));
	if(!trim)
		return (NULL);
	while(begin < end)
		*(trim + i++) = *(s1 + begin++); //сначала используем значение затем увеличиваем на 1
	return (trim);
}
/* код который проходит проверку, правильное выделение памяти и защита
int	proverka(char const *set, char p)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == p)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	begin;
	size_t	end;
	size_t	i;
	char	*trim;

	begin = 0;
	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[begin] && proverka(set, s1[begin]))
		begin++;
	end = ft_strlen(s1);
	while (end > begin && proverka(set, s1[end - 1]))
		end--;
	trim = (char *)malloc((end - begin) + 1);
	if (!trim)
		return (NULL);
	while (begin < end)
		*(trim + i++) = *(s1 + begin++);
	*(trim + i) = '\0';
	return (trim);
}
*/


int main()
{
char const str[11] = "aaa7777aaa";
char const setn[4] = "aaa";
char *res;
res = ft_strtrim(str, setn);

printf("Returned string - %s\n", res);

return (0);
}
