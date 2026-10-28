#include "libft.h"

static ssize_t	overlap(unsigned char	*d, const unsigned char	*s, size_t n)
{
	size_t		i;

	i = 0;
	while (i < n)
	{
		if (d == s)
			return (1);
		i++;
		s++;
	}
	return (0);
}

static void	fakemove(unsigned char	*d, const unsigned char	*s, size_t n)
{
	while (n > 0)
	{
		n--;
		d[n] = s[n];
	}
}

void	*ft_memmove(void	*dest, const void	*src, size_t n)
{
	size_t				i;
	const unsigned char	*s;
	unsigned char		*d;

	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	d = (unsigned char *) dest;
	s = (const unsigned char *) src;
	if (d != s && overlap(d, s, n) == 1)
	{
		fakemove(d, s, n);
		return (dest);
	}
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
