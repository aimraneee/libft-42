#include "libft.h"

static char	*joining(char const	*s1, char const	*s2, char	*str)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		str[i] = s2[j];
		j++;
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_strjoin(char const	*s1, char const	*s2)
{
	size_t	length;
	char	*str;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	length = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = malloc(length * sizeof(char));
	if (str == NULL)
		return (NULL);
	return (joining(s1, s2, str));
}
