#include "libft.h"

static	int	ft_isalphaa(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

static	int	ft_isdigits(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	ft_isalnum(int c)
{
	if (ft_isalphaa(c) == 1 || ft_isdigits(c) == 1)
		return (1);
	else
		return (0);
}
