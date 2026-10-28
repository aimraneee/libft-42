#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	occ;

	i = 0;
	if (needle[0] == '\0')
		return ((char *) haystack);
	while (i < len && haystack[i])
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			occ = i;
			while (i < len && needle[j] && haystack[i] == needle[j])
			{
				i++;
				j++;
			}
			if (needle[j] == '\0')
				return ((char *)&haystack[occ]);
			i = occ;
		}
		i++;
	}
	return (NULL);
}
