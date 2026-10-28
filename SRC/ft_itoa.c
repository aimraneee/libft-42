#include "libft.h"

static int	ft_len(int n)
{
	int	len;

	len = 1;
	while ((n / 10) != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static char	*negative(int n, int length)
{
	long long	nb;
	char		*str;
	char		*dec;

	dec = "0123456789";
	str = malloc(length * sizeof(char));
	if (str == NULL)
		return (NULL);
	length--;
	str[length] = '\0';
	length--;
	nb = (long long)n * -1;
	while (length > 0)
	{
		str[length] = dec[nb % 10];
		length--;
		nb /= 10;
	}
	str[length] = '-';
	return (str);
}

static char	*positive(int n, int length)
{
	char	*str;
	char	*dec;

	dec = "0123456789";
	str = malloc(length * sizeof(char));
	if (str == NULL)
		return (NULL);
	length--;
	str[length] = '\0';
	length--;
	while (length >= 0)
	{
		str[length] = dec[n % 10];
		length--;
		n /= 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		length;

	length = ft_len(n);
	if (n >= 0)
		return (positive(n, length + 1));
	else
		return (negative(n, length + 2));
}
