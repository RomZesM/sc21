#include <stdlib.h>
#include <stdio.h>

typedef struct Node
{
	int data;
	struct Node * next;
}Node;
void	print(Node *p);
void	push(Node **pt, int x);
int is_empty(Node *pt);
int pop(Node **pt);

void	print(Node *p)
{
	while (p != NULL) //пока указатель не стенет указывать на NULL
	{
		printf("%d ", p->data); //распечатываем
		p = p->next; //присваиваем указателю адрс на следующий элемент цепи
	}
	printf("\n");
}
void	push(Node **pt, int x) //добавление нового узла и занесение в него информации
{
	Node * p = malloc(sizeof(Node)); //создание нового узла с выделением для него памяти
	p->data = x;
	p->next = *pt; //в старт/доступ к start через указатель) хранился адрес на первый элемент (на а)
	*pt = p; //присваиваем указателю start адрес новой созданной ячейки
}
int pop(Node **pt) //достаем данные и удаляем первый элемент
{
	int c; //для возврата данных
	Node *x; //чтобы не потерять адрес на первую ячейку
	x = *pt;
	c = x->data;
	*pt = x->next; //меняем старт через указатель на указатель pt, присваиваем ему адрес 2ой ячейки, которая хранилась в next
	free(x);// надо очистить память, так как создание элемента структуры (указателя Node *) маллочит память
	return (c);
}
int is_empty(Node *pt)
{
	return(pt == NULL);
}

int main()
{
	int test[] = {12, 42, 21, 77, 88};
	size_t i;
	size_t size; //переменная для вычисления размера списка test

	Node * start = NULL; //создаем указатель на первый элемент списка


	i = 0;
	size = sizeof(test) / sizeof(test[0]); //вычисление количества элементов в массиве, путем деления ращмера массива, на замер одного элемента, подходит для любого типа
	while(i < size)
		{
			push(&start, test[i]);
			print(start);
			i++;
		}

	while(!is_empty(start))
	{
		int d = pop(&start);
		//printf("Pop out - %d\n", d);
		print(start);
	}

	return (0);
}
