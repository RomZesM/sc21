#include "libft.h"

int	proverka(char const *set, char p)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == p)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	begin;
	size_t	end;
	size_t	i;
	char	*trim;

	begin = 0;
	i = 0;
	while (s1[begin] && proverka(set, s1[begin]))
		begin++;
	end = ft_strlen(s1);
	while (end > begin && proverka(set, s1[end - 1]))
		end--;
	trim = (char *)malloc(sizeof(trim) * ((end - begin) + 1));
	if (!trim)
		return (NULL);
	while (begin < end)
		*(trim + i++) = *(s1 + begin++);
	return (trim);
}
