/*

Prototype t_list *ft_lstlast(t_list *lst);
Turn in files -
Parameters #1. The beginning of the list.
		Return value Last element of the list.
External functs. None
Description Returns the last element of the list.
*/

t_list *ft_lstlast(t_list *lst)
{
	t_list *res;
	res = lst; //указывает на 1 ячейку
	while(res->next != NULL)
		{
			res = res->next;
		}
	return (res);
}

