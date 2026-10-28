#include "libft.h"

static int	found(char const	*set, char c)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static char	*triming(char const	*s1, int start, int end)
{
	char	*str;
	int		i;

	i = 0;
	if (start > end)
	{
		str = malloc(sizeof(char));
		if (str == NULL)
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	str = malloc((end - start + 2) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (start <= end)
	{
		str[i] = s1[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_strtrim(char const	*s1, char const	*set)
{
	int	end;
	int	start;
	int	flag;

	if (s1 == NULL || set == NULL)
		return (NULL);
	end = ft_strlen(s1) - 1;
	start = 0;
	flag = 1;
	while (start <= end && flag == 1)
	{
		flag = 0;
		if (found(set, s1[start]) == 1)
		{
			start++;
			flag = 1;
		}
		else if (found(set, s1[end]) == 1)
		{
			end--;
			flag = 1;
		}
	}
	return (triming(s1, start, end));
}
