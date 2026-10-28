#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	char	*p;
	size_t	i;

	if (n == 0 || size == 0)
	{
		p = malloc(sizeof(char));
		if (p == NULL)
			return (NULL);
		return (p);
	}
	i = 0;
	if (size > SIZE_MAX / n)
		return (NULL);
	p = malloc(n * size * sizeof(char));
	if (p == NULL)
		return (NULL);
	while (i < n * size)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
