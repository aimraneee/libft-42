#include "libft.h"

static void	ft_free(char	***strs, ssize_t	*counts)
{
	size_t	i;

	i = 0;
	while ((*strs)[i])
	{
		free((*strs)[i]);
		i++;
	}
	free(*strs);
	*counts = -1;
	*strs = NULL;
}

static void	str_len(char	***strs, char const	*str, char c, ssize_t	*counts)
{
	size_t	i;
	size_t	len;
	size_t	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		len = 0;
		while (c == str[i])
			i++;
		while (str[i] && c != str[i])
		{
			len++;
			i++;
		}
		if (len > 0)
		{
			(*strs)[count] = malloc((len + 1) * sizeof(char));
			if ((*strs)[count] == NULL)
				return (ft_free(strs, counts));
			count++;
		}
	}
	(*strs)[count] = NULL;
}

static void	store(char	**strs, char const	*str, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	k = 0;
	while (str[k])
	{
		j = 0;
		while (c == str[k])
			k++;
		while (str[k] && strs[i] && c != str[k])
		{
			strs[i][j] = str[k];
			j++;
			k++;
		}
		if (strs[i])
		{
			strs[i][j] = '\0';
			i++;
		}
	}
}

static void	words(char const	*s, char c, ssize_t	*count)
{
	size_t		i;

	i = 0;
	while (s[i])
	{
		while (c == s[i])
			i++;
		if (s[i] && c != s[i])
		{
			(*count)++;
			i++;
		}
		while (s[i] && c != s[i])
			i++;
	}
}

char	**ft_split(char const	*s, char c)
{
	ssize_t		count;
	char		**strs;

	count = 0;
	if (s == NULL)
		return (NULL);
	words(s, c, &count);
	strs = malloc((count + 1) * sizeof (char *));
	if (strs == NULL)
		return (NULL);
	str_len(&strs, s, c, &count);
	if (count != -1)
		store(strs, s, c);
	return (strs);
}
