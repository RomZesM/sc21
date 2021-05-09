#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// counts non empty words at input
int	count_words(char const *input, char s)
{
	int	i;
	int	words_count;
	int	word_begin_inx; //current word begin index at the input

	words_count = 0;
	word_begin_inx = 0;
	i = 0;
	while (input[i] !='\0')
	{
		if (input[i] == s) //если находим разделитель
		{
			if ((i - word_begin_inx) > 1) //проверяем не пустое ли слово (чтобы отсечь двойные запятые)
				words_count +=1;
				word_begin_inx = i;
		}
		i++;
	}
	if (input[i-1] != '*') //считаем последнее слово, если оно не закончилось разделителем
	words_count += 1; // last word end's without '*'
	return words_count;
}

// returns true if word was copied (if word length > 0)
int	malloc_and_copy_word(char const *input, int word_begin_inx, int word_end_inx,int word_idx, char **result)
{
	int word_len = (word_end_inx - word_begin_inx);
	if ((word_len) != 0) {
	result[word_idx] = malloc(sizeof(char) * word_len + 1); // + '\0'
	result[word_idx][word_len] = '\0';
	// TODO: next function probably should be used from library
	memcpy(result[word_idx], input + word_begin_inx, word_len);
	word_idx += 1;
	return (1);
	}
	return (0);
}

char	**ft_split(char const *s, char b)
{
	int		words_count;
	int		word_idx;
	int 	i;
	int		word_begin_inx; // current word begin index at the input
	char	**result;

	words_count = count_words(s,b);
	result = malloc(sizeof(char*) * (words_count+1)); //маллочим место для количества строк = количество слов
	result[words_count] = NULL; // NULL for end
	word_begin_inx = 0; // current word begin index at the input
	word_idx = 0; // current word index
	i = 0;
	while(s[i] != '\0')
	{
		if (s[i] == b)
		{
			if (malloc_and_copy_word(s, word_begin_inx, i, word_idx, result))
			{
				word_idx += 1;
				word_begin_inx = i + 1;
			}
		}
		i++;
	}
	malloc_and_copy_word(s, word_begin_inx, i, word_idx, result); //добавляем последнее слово
	return result;
}

int main(int argc, char** argv)
{
	if (argc < 2)
	return 1;

	char* input = argv[1];
	char** words = ft_split(input, '*');
	for(int i = 0 ; words[i] != NULL ; ++i) {
	printf("%d:'%s'\n", i, words[i]);
	free(words[i]); // free memory per word
	}
	free(words); // free memory of array

	return 0;
}
