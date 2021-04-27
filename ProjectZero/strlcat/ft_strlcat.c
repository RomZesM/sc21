/*
Функция strlcpy копирует из строки src в буфер dst не более чем size - 1 символов 
и гарантированно устанавливает в конец строки нулевой символ. strlcat делает то же самое, 
однако копирование ведётся не в начало dst, а таким образом, чтобы продолжить строку, на которую указывает dst.

strlcat возвращает суммарную длину строк по адресам src и dst. 
Возвращаемое значение не зависит от того, удалось скопировать строку полностью или нет; 
это позволяет легко определить что буфер назначения слишком мал для копируемой строки.

*/
//сначала считаем строку dst. копируем n байт из src сразу начиная с \0, считаем src прибавляем dst и возвращаем
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


size_t ft_strlcat (char *dst, const char *src, size_t dstsize)
{
	size_t i;

	i = 0;
	while(i < size)
		{
			dst[i] = src[i];
			i++;
		}
	dst[i] = '\0'; //добавляем в конец строки символ \0
	return (ft_strlen(src));
}