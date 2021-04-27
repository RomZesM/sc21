/*
Функция strlcpy копирует из строки src в буфер dst не более чем size - 1 символов и гарантированно 
устанавливает в конец строки нулевой символ. 
strlcpy возвращает размер строки по адресу src, Возвращаемое значение не зависит от того, удалось скопировать строку полностью или нет; 
это позволяет легко определить что буфер назначения слишком мал для копируемой строки.

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

size_t ft_strlcpy (char *dst, const char *src, size_t size)
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


int main(void)
{  
	char  buf[10];
	const char *src = "01010101010101010101"; // неизменяемый массив
	size_t sz = 0;

  	buf[0] = '\0';                   // избыточная инициализация, заполнение массива нулями для отладочной печати

   printf("строка: \"%s\"\n\n", src);
   printf("буфер перед копированием: \"%s\"\n", buf);

   sz = ft_strlcpy(buf, src, sizeof(buf));    
   if (sz >= sizeof(buf))           // пример определения усечения строки      
      printf("обнаружено усечение строки с %zu до %lu символов !\n", sz, sizeof(buf)-1);

   printf("буфер после копирования:  \"%s\"\n", buf);

   return 0;
}
