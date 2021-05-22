/*

Turn in files -
Parameters #1. The address of a pointer to the first link of
a list.
#2. The address of a pointer to the element to be added to the list.
Return value None
External functs. None
Description Adds the element ’new’ at the end of the list.
*/

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list count;
	count = *lst;
	while(count->next != NULL) //
		{
			count = count->next; //идем по списку, пока не дойдем до последнего элемента
		}
	count->next = new;//добаляем указатель на новый элемент, подразумевается, что у него ->next установлен в NULL
}
