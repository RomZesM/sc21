/*
Function name ft_lstclear
Parameters 	#1. The adress of a pointer to an element.
			#2. The adress of the function used to delete the content of the element.

External functs. free
Description Deletes and frees the given element and every successor(?следующие элементы) of that element, using the function ’del’
and free(3).
Finally, the pointer to the list must be set to NULL.
*/
void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *buf;
	t_list *temp;
	buf = *lst;
	while(buf) //
	{
		temp = buf->next; //для врмеенного хранения указателя на следующую ячейку для очистки
		if(del) //защита
			del(buf->content);
		free(buf);//освобождает память элемента
		buf = temp;//получает адрес следующей ячейки
	}
	*lst = NULL;
}
