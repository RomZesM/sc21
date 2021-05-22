/*
char **ft_split(char const *s, char c);
-
		#1. The string to be split.
		#2. The delimiter character.
The array of new strings resulting from the split.
NULL if the allocation fails.
malloc, free
\
получаем строку типа *Это*важное*слово*, * разделитель, разделить на отдельные слова, и записатьт каждое в массив, и вернуть

Allocates (with malloc(3)) and returns an array of strings obtained by splitting ’s’ using the
character ’c’ as a delimiter. The array must be ended by a NULL pointer.
*/

#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (*s)
	{
		i++;
		s++;
	}
	return (i);
}

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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *p;
	int i;

	i = 0;
	if (!(p = (char *)malloc(len + 1)) || !s)
		return (NULL);
	while (len && start < ft_strlen(s))
	{
			p[i] = s[start];
			start++;
			len--;
			i++;
	}
	p[i] = '\0';
	return (p);
}

int		ft_count_words(char const *s, char c)
{
	int i;
	int wc;

	i = 0;
	wc = 0;
	while (s[i])
	{
		if (s[i] == c && s[i+1] != c && s[i+1] != '\0') //если разделитель и следующий
			{							//символ не разделитель, то это было слово
			wc++;
			}
		i++;
	}
	return (wc);
}

void	ft_freemem(int j, char **arr)
{
	while (j)
	{
	free(arr[j]);
	j--;
	}
	free(arr);
}

char	*ft_strchr (const char *str, int ch)
{
	int		i;
	char	*b;

	b = (char *)str;
	i = 0;
	while (b[i] != '\0')
	{
		if (b[i] == ch)
			return (&b[i]);
		else
			i++;
	}
	if (b[i] == ch)
		return (&b[i]);
	return (NULL);
}

char **ft_split(char const *s, char c)
{
	int i; //счетчик для массива
	//int n;//счетчик длинны слова
//	int h;//начало слова
	int j;//счетчик для записи слов в массив (номер строки)
	char **arr;
	char *copy;
	char *copy2;
	char *set;

	if (!c || !s)
		return (NULL);
	if (!(arr = (char**)malloc(sizeof(int*) * (ft_count_words(s, c) + 1))))
		return (NULL);
	i = 0;
	j = 0;
	printf("s - %s\n", s);
	copy = (char *)s;
	copy2 = (char *)s;
	printf("copy - %s", copy);
	set = NULL;
	set = &c;
	printf("set - %s", set);
	while (i < ft_count_words(s, c))
	{
		copy = ft_strtrim(s, set);
		printf("s- %s", s);
		copy2 = ft_strchr(copy, c);
		arr[i] = ft_substr(copy, 0, copy - s);
		copy = copy2;
		i++;
	}
	//arr[j] = NULL; //добавляем 0 в конец
	return (arr);
}
/*
		n = 0;
		while (s[i] == c)
			i++;
		h = i; //дошагали до буквы, запомнили - это начало слова
		while (s[i] != c && s[i] != '\0')//идем пока не встретим разделитель
		{
			n++; //счетчик длинны слова
			i++;
		}
		if (n != 0) //если слова длиннее 0
			{
			if (!(arr[j] = (char *)malloc(n))) //выделяем память, если не выделилось, то чистим
			{
				ft_freemem(j, arr);
				return (NULL);
			}
			arr[j] = ft_substr(s, h, n); //передаем строку, начало и длинну слова
			j++; //счетчик слов в строке увеличивается
		}
	}
	arr[j] = NULL; //добавляем 0 в конец
	return (arr);
}
*/
int	main()
{
	char **str;
	int i;
	const char *s = "ololol  ghg dlskj";
	i = 0;
	str = ft_split(s, ' ');
	while(i < 3)
		{
		printf("%s\n", str[i]);
		i++;
		}
	return (0);
}
