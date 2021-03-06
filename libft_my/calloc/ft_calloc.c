/*
void * calloc(size_t count, size_t size);

выделяет память под count элементов размером в size, и
забивает ее нулями возвращает указатель или NULL если не смог выделить память
*/

#include <stdlib.h>
#include <stdio.h>


void	ft_bzero(void *s, size_t n)
{
	size_t					i;
	unsigned char			*d;

	d = s;
	i = 0;
	while (i < n)
	{
		d[i] = '\0';
		i++;
	}
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	ptr = malloc(count * size);
	if	(!ptr)
		return (NULL);
	ft_bzero (ptr, count * size);
	return (ptr);
}

int main()
{
	char * str;
	str = ft_calloc(10,sizeof(char));

	printf("Returned ptr - %s", str);
	return(0);
}
