#include "get_next_line.h"

char *check_ost(char *ost, char **line)
{
	char *p_n;

	p_n = NULL;
	if (ost)
	{
		if ((p_n = ft_strchr(ost, '\n'))) //если встретился символ конца строки
		{
			*p_n = '\0'; //изменяем символ переноса строки на симфол конца массива
			*line = ft_strdup(ost); //выделяем память и делаем дубликат стоки OST (что в ней хранться???)
			ft_strcpy(ost, ++p_n);//копируем в OST то что находится ПОСЛЕ символа новой стоки (двигаем указатель)
		}
		else //если на неходим конца строки, значит видимо достигли конца файла
		{
			*line = ft_strjoin(*line,ost); //присоединяем к line то что осталось в OST
			*ost = '\0';
		}
	}
	return (p_n);
}

int get_next_line(int fd, char **line)
{
	char buf[BUFFER_SIZE + 1]; //НЕХ
	int bytes; //для получения возвращаемого значения read (фактическое количество прочитанных байт)
	char *p_n;
	static char *ost;// тут будет что то постоянно храниться?

	if (!fd || !line)
		return(-1);
	*line = "\0"; //ставим символ конца файла с текущую позицию line?
	p_n = check_ost(ost, line);//отправляем на проверку статическую переменную ost и почемуто пустую строку line
	while (!p_n  && (bytes = read(fd, buf, BUFFER_SIZE)))
	{
		buf[bytes] = '\0'; //поставить в конец буффера символ конца строки
		if ((p_n = ft_strchr(buf,'\n'))) //если натыкаемся на символ конца строки
		{
			*p_n = '\0'; //ставим в
			p_n++;
			ost = ft_strdup(p_n);
		}
		*line = ft_strjoin(*line, buf);
	}
	return (bytes || ft_strlen(*line)) ? 1 : 0;
}

int main(void)
{
	int fd; //
	char *line; //указатель для хранения вернувшейся строки

	fd = open("text.txt",O_RDONLY); //открываем файл (как то должно работать и со стандартным вводм с клавиатуры)
	while (get_next_line(fd, &line))
		printf("%s\n\n", line);
	return(0);
}
