#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*src;
	unsigned char		l;

	i = 0;
	l = c;
	src = (const unsigned char *) s;
	while (i < n)
	{
		if (src[i] == l)
			return ((void *)&src[i]);
		i++;
	}
	return (NULL);
}
