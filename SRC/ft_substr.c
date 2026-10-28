#include "libft.h"

static char	*cpy(char const	*s, char	*sub, size_t len)
{
	size_t	i;

	i = 0;
	while (s[i] && i < len)
	{
		sub[i] = s[i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

char	*ft_substr(char const	*s, unsigned int start, size_t len)
{
	size_t	length	;
	char	*sub	;

	if (s == NULL)
		return (NULL);
	length = ft_strlen(s);
	if (start >= length)
	{
		sub = malloc(sizeof(char));
		if (sub == NULL)
			return (NULL);
		sub[0] = '\0';
		return (sub);
	}
	if (len > length - start)
		return (ft_strdup(&s[start]));
	sub = malloc((len + 1) * sizeof(char));
	if (sub == NULL)
		return (NULL);
	return (cpy(&s[start], sub, len));
}
