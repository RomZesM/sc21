/*
Функция strlcpy копирует из строки src в буфер dst не более чем size - 1 символов
и гарантированно устанавливает в конец строки нулевой символ.
strlcat делает то же самое,
однако копирование ведётся не в начало dst, а таким образом, чтобы продолжить
строку, на которую указывает dst.
В случае, когда dst указывает на нуль-символ, поведение функций эквивалентно.

strlcat возвращает суммарную длину строк по адресам src и dst.
Возвращаемое значение не зависит от того, удалось скопировать строку полностью или нет;
это позволяет легко определить что буфер назначения слишком мал для копируемой строки.

*/
//сначала считаем строку dst. копируем n байт из src сразу начиная с \0, считаем src прибавляем dst и возвращаем
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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


size_t	ft_strlcat (char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	d;
	size_t	s;

	i = 0;
	d = ft_strlen(dst);
	s = ft_strlen(src);
	if (d > dstsize)
		s = s + dstsize;
	else
	{
		s = s + d;
		while (src[i] != '\0' && d < dstsize - 1)
			dst[d++] = src[i++];
		dst[d] = '\0';
	}
	return (s);
}

int main(void)
{

	char *str = "the cake is a lie !\0I'm hidden lol\r\n";
	char buff1[0xF00] = "there is no stars in the sky";
	char buff2[0xF00] = "there is no stars in the sky";
	size_t max = strlen("the cake is a lie !\0I'm hidden lol\r\n") + 4;

	size_t r1 = strlcat(buff1, str, max);
	size_t r2 = ft_strlcat(buff1, str, max);

	printf("MAX = %lu\n", max);
	printf("r1 = %lu, r2 = %lu\n", r1, r2);
	printf("strlcat - %s\n", buff1);
	printf("ft_strlcat - %s\n", buff2);

/*
	size_t sz = 0;
   printf("строка: \"%s\"\n\n", src);
   printf("буфер перед копированием: \"%s\"\n", buf);

   sz = ft_strlcat(buf, src, sizeof(buf));
   if (sz >= sizeof(buf))           // пример определения усечения строки
      printf("обнаружено усечение строки с %zu до %lu символов !\n", sz, sizeof(buf)-1);

   printf("буфер после копирования:  \"%s\"\n", buf);
*/
   return 0;
}
