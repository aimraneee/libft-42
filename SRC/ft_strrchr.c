#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	l;

	l = c;
	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == l)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
