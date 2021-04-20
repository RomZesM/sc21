#include <unistd.h>
#include <stdio.h>

int main()
{
    char c[] = "123456";
    int i = 0;
    while (i < 4)
    {
        write(*c, "0", 1);
        i++;
    }
    printf("%s\n", c);
   return (0); 
}