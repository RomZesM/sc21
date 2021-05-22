/*

Parameters #1. The address of a pointer to the first link of a list.
			#2. The address of a pointer to the element to be added to the list.

Return value None

Description Adds the element ’new’ at the beginning of the list.
*/
#include <stdlib.h>
#include <stdio.h>

typedef struct s_list
{
	void *content;
	struct s_list *next;
} t_list;

void ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst; //lst указывает на 1 элемент, призваиваем это значение в новую ячейку, чтобы next указывал на бывший 1 элемент
	*lst = new; //меняем через указатель на указатель значение для 1 элемента

}
