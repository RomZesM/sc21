/*
Parameters #1. The content to create the new element with.
Return value The new element.
External functs. malloc
Description Allocates (with malloc(3)) and returns a new element. The variable ’content’ is initialized
with the value of the parameter ’content’. Thevariable ’next’ is initialized to NULL.
*/

#include <stdlib.h>
#include <stdio.h>

typedef struct s_list
{
	void *content;
	struct s_list *next;
} t_list;

t_list *ft_lstnew(void *content)
{
	t_list *x;
	printf("Получили - %p\n", content);
	if(!(x = malloc(sizeof(t_list) + sizeof(content))))//тут не уверен, правильно ли выделил память
		return (NULL);
	if(!content)
		x->content = NULL; //проверка , если ничего не пришло в виде контент, то сделать ее пустой, надо ли?
	else
		x->content = content;
	x->next = NULL;
	return (x);
}

int main()
{
	t_list *new;
	int i;

	i = 10;
//	int *data = &i;
	new = ft_lstnew(&i);
	printf("Записали в структуру - %p\n", (int*)new->content);
	//if(new->next == NULL)
	printf("Указатель на следующую ячейку - %p\n", new->next);
	return (0);
}
