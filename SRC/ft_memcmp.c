#include "libft.h"

int	ft_memcmp(const void	*s1, const void	*s2, size_t n)
{
	size_t				i;
	const unsigned char	*str1;
	const unsigned char	*str2;

	i = 0;
	str1 = (const unsigned char *) s1;
	str2 = (const unsigned char *) s2;
	if (n == 0)
		return (0);
	while (i < n && str1[i] == str2[i])
		i++;
	if (i == n)
		return (str1[i - 1] - str2[i - 1]);
	return (str1[i] - str2[i]);
}
