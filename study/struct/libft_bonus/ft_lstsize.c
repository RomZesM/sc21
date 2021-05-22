/*
Function name ft_lstsize
Prototype int ft_lstsize(t_list *lst);
Turn in files -
Parameters #1. The beginning of the list.
Return value Length of the list.
External functs. None
Description Counts the number of elements in a list.
*/

int ft_lstsize(t_list *lst)
{
	int i;
	t_list *count;

	i = 1;
	count = lst;
	while(count) //в самом конце в адресе окажется NULL, значит крутим счетчик пока не существует count
	{
		count = count->next; //следующая ячейка становиться первой
		i++;
	}
	return (i);
}
