//явное преобразование типов

#include <stdio.h>


int main()
{
int i;
char c[] = 54;
i = (int)c; //преобразование чара в инт и присваивание ? а что, так можно было?
printf("%i\n", i);
return(0);
}