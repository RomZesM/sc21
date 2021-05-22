/*bzero - записывает пустые байты  
СИНТАКСИС
#include <strings.h>

I void bzero(void * s , size_t  n );
 
ОПИСАНИЕ
Функция bzero() устанавливает первые n байтов области, начинающейся с s в нули (пустые байты)*/

#include <unistd.h>
#include <stdio.h>
#include <string.h>

void ft_bzero(void * s, size_t n)
{
    size_t i;
    unsigned char *d;

    d = s;
    i = 0;
    while (i < n)
    {
        d[i] = '\0';
        i++;
    }
}

int main()
{
    int l = 0;
    //int l1 = 0;

    char c[] = "aaaaa";
    int c1[] = {1,1,1,1,1};
    ft_bzero(c, 3);
    while (l < 5)
    {
        write(1, &c[l],1);
        l++;
    }
    printf("\n");
    

    ft_bzero(c1, 3);
    printf("%i%i%i%i%i\n",c1[0],c1[1],c1[2],c1[3],c1[4]); //распечатка массива int посимвольно
 
    

}
