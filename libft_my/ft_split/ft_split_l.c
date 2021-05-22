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



char **ft_split(char const *s, char c)
{
	int i; //счетчик для массива
	int word_counter; //счетчик для количества слов
	int n;//счетчик длинны слова
	int h;//начало слова
	int j;//счечик для записи слов в массив (номер строки)
	char **arr;

	i = 0;
	if (!c || !s)
		return (NULL);
	word_counter = ft_count_words(s, c);
	//маллочим память под **char зная количество слов и 1 под 0
	if (!(arr = (char**)malloc(sizeof(int*) * (word_counter + 1))))
		return (NULL);
	j = 0;
	while (s[i])
	{
		n = 0;
		while (s[i] == c) //пока разделитель идем дальше
			i++;
		h = i; //дошагали до буквы, запомнили - это начало слова
		while (s[i] != c && s[i] != '\0')//идем пока не закончится слово
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

int	main()
{
	char **str;
	int i;

	i = 0;
	str = ft_split("ololol  ghg dlskj  ", ' ');
	while(i < 3)
		{
		printf("%s\n", str[i]);
		i++;
		}
	return (0);
}
