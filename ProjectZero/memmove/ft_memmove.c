/*
SYNOPSIS
     #include <string.h>

     void *
     memmove(void *dst, const void *src, size_t len);

DESCRIPTION
     The memmove() function copies len bytes from string src to string dst.  The two strings may overlap; the copy is always done in
     a non-destructive manner.

RETURN VALUES
     The memmove() function returns the original value of dst.

*/
#include <stdio.h>
#include <string.h>

void * ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;
	unsigned char *d;
	unsigned char *s;
	
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	i = 0;

	if (d < s)
		{
			while(i < len)
				{
					d[i] = s[i];
					i++;	
				}
			return(d);
		}
	else
		while(len--)
			d[len] = s[len];
		return(d);
}

int main (void)
{
   // Исходный массив данных
	unsigned char src[10]= "000006789";
	unsigned char src2[10]= "000006789";	
   // Вывод массива src на консоль
	printf ("src old: %s\n",src);
	
   // Копируем 3 байт
	ft_memmove(&src[4], &src[7], 2);
	memmove (&src2[4], &src2[7], 2);

   // Вывод массива src на консоль
	printf ("M -src new: %s\n",src);
	printf ("O -src new: %s\n",src2);
   return 0;
}