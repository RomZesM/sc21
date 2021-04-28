/*
  int
     toupper(int c);

     #include <ctype.h>
     #include <xlocale.h>

     int
     toupper_l(int c, locale_t loc);

DESCRIPTION
     The toupper() function converts a lower-case letter to the corresponding upper-case letter.  The argument must be representable
     as an unsigned char or the value of EOF.

     Although the toupper() function uses the current locale, the toupper_l() function may be passed a locale directly. See
     xlocale(3) for more information.

RETURN VALUES
     If the argument is a lower-case letter, the toupper() function returns the corresponding upper-case letter if there is one;
     otherwise, the argument is returned unchanged.
*/


#include <ctype.h>
#include <stdio.h>

int ft_toupper(int c)
{
	if(c >= 'a'  && c <= 'z')
		return (c - 32);
	else 
		return (c);
}

int main()
{
	char c[] = "y";
	
	printf("Вернулось - %i\n", ft_toupper(c[0]));
	printf("Вернулось O - %i\n", toupper(c[0]));

	

	return (0);
}