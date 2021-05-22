#include <stdio.h>

#define N 3

typedef int Data; //под словом дата в дальнейшем будет подставляться int
/*
typedef struct Bub
{
	Data a[N];			//данные в структуре, массив типа инт длинной 8
	unsigned int n;		//количество элементов в массиве, так же указывает на номер пустой ячейки
}					// "псевдоним структуры"
*/
struct Bub
{
	Data a[N];
	unsigned int n;
};

void ft_print(struct Bub * pt) //ф для распечатки элементов структуры через указатель
{
	unsigned int i;
	i = 0;
	while (i < pt->n)
	{
		printf("%d ", pt->a[i]);
		i++;
	}
	printf("\n");
}
void ft_init(struct Bub *pt) //функция для инициализации счетчика в 0, чтобы не получить сегфолд
{
	pt->n = 0;
}
void push(struct Bub *pt, Data x) //функция для добаывления записаи в массив, который находится  в структуре
{
	pt->a[pt->n] = x; //присваимваем переданную информацию в поле дата в стрктуре
	pt->n ++; //увеличиваем на 1 счетчик количества эелемнтов в структуре, чтобы знать куда записывать дальше
}

int pop(struct Bub *pt) //функция, чтобы убрать из стека верхнее число
{
	Data c;
	c = pt->a[pt->n - 1]; //n указвыает на пустую ячейку массива за данными
	pt->n --;
	return (c);
}
int is_empty(struct Bub *pt)
{
	return (pt->n == 0); //проверка стека на пустоту, если выражение не верно то возвращается 0, иначе ? и тернатнный оператор их както различает..
}
int is_full(struct Bub *pt)
{
	return (pt->n == N); //проверка стека на заполненность, если выражение не верно то возвращается 0, иначе ? и тернатнный оператор их както различает..
}

int main()
{

	struct Bub Stack;
	struct Bub *p; //создаем указатель на этот элемент структуры

	p = &Stack;
	Data d;

	ft_init(p);
	printf("Stack is empty ? - %s\n", is_empty(p) ? "YES" : "NO");
	ft_print(p);

	push(p, 5);
	ft_print(p);
	push(p, 77);
	ft_print(p);
	push(p, -125);
	ft_print(p);
	printf("Stack is empty ? - %s\n", is_empty(p) ? "YES" : "NO");
	printf("Stack is FULL ? - %s\n", is_full(p) ? "YES" : "NO");
	d = pop(p);
	printf("Вытащили из стека %d\n", d);
	ft_print(p);
	d = pop(p);
	printf("Вытащили из стека %d\n", d);
	ft_print(p);
	d = pop(p);
	printf("Вытащили из стека %d\n", d);
	printf("Stack is empty ? - %s\n", is_empty(p) ? "YES" : "NO");
	return (0);
}

