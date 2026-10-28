#include "libft.h"

char	*ft_strdup(const char	*s)
{
	size_t	len;
	char	*copy;

	len = 0;
	while (s[len] != '\0')
		len++;
	copy = malloc((len + 1) * sizeof(char));
	if (copy == NULL)
		return (NULL);
	len = 0;
	while (s[len] != '\0')
	{
		copy[len] = s[len];
		len++;
	}
	copy[len] = '\0';
	return (copy);
}
