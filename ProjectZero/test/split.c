#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	char				*srccpy;

	srccpy = dest;
	++n;
	while (--n > 0 && *src != '\0')
	{
		*dest++ = *src++;
	}
	while (n-- > 0 && *dest != '\0')
	{
		*dest = '\0';
		++dest;
	}
	return (srccpy);
}


char	*ft_strnew(size_t size)
{
	char	*s;

	if (!(s = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	ft_bzero(s, size + 1);
	return (s);
}


static size_t	get_tab_size(const char *str, char c)
{
	size_t	i;

	i = 0;
	while (*str != '\0' && ++str)
	{
		while (*str != c && *str != '\0')
			++str;
		++i;
		while (*str == c)
			++str;
	}
	return (i + 1);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		i;
	size_t	lenstr;

	if (!s)
		return (NULL);
	while (*s == c)
		++s;
	if (!(tab = (char**)malloc(get_tab_size(s, c) * sizeof(char*))))
		return (NULL);
	i = 0;
	while (*s != '\0')
	{
		lenstr = 0;
		while (*s != c && *s != '\0' && ++s)
			++lenstr;
		if (!(tab[i] = ft_strnew(lenstr)))
			return (NULL);
		ft_strncpy(tab[i++], s - lenstr, lenstr);
		while (*s == c)
			++s;
	}
	tab[i] = 0;
	return (tab);

}

int main()
{
	char c = '*';
	char const *str = "*word*word2*wprd3*";
	char **res;
	res = ft_strsplit(str, c);
	printf("%s\n", res[0]);
	printf("%s\n", res[1]);
	printf("%s\n", res[2]);
	return(0);
}
