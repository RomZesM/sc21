#include <stdlib.h>
#include <string.h>

static size_t	ft_strlen(const char *str)
{
	unsigned long int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

static char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;
	unsigned int	c;

	c = 0;
	i = start;
	if (!s)
		return (NULL);
	sub = malloc (len + 1);
	if (ft_strlen(s) <= start)
	{
		sub[0] = '\0';
		return (sub);
	}	
	if (!sub)
		return (NULL);
	while (s[i] && c < len)
		sub[c++] = s[i++];
	sub[c] = '\0';
	return (sub);
}

static char	*ft_strchr(const char *str, int ch)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == ch)
		{
			return ((char *)str + i);
		}
		i++;
	}
	if (ch == '\0' && str[i] == '\0')
	{
		return ((char *)str + i);
	}
	return (NULL);
}

static size_t	counter_str(const char *s, char c)
{
	size_t	number_str;
	char	*str;

	number_str = 0;
	str = (char*)s;
	while (str)
	{
		str = ft_strchr(str, c);
		if (str)
		{
			str++;
			number_str++;
		}
	}
	return (number_str);
}

static char	**allocation_copy(char **mass, char const *s, char c, size_t number_str)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char*)s;
	while (i <= number_str)
	{
		str = ft_strchr(str, c);
		if (!str)
			str = ft_strlen(s) + (char *)s;
		mass[i] = ft_substr(s, 0, str - s);
		if (!mass[i])
		{
			return (NULL);
		}
		s = str;
		str++;
		s++;
		i++;
	}
	return (mass);
}

char	**ft_split(char const *s, char c)
{
	char	**mass;
	size_t	number_str;

	number_str = counter_str(s, c);
	mass = (char **) malloc ((number_str + 1) * sizeof(char*));
	if (!mass)
		return (NULL);
	mass = allocation_copy (mass, s, c, number_str);
	if (!mass)
		return (NULL);
	return (mass);
}