#include "libft.h"

static size_t	ft_strlen_dest(const char	*str, size_t dstsize)
{
	size_t	len;

	len = 0;
	while (len < dstsize && str[len])
		len++;
	return (len);
}

static size_t	ft_strlens(const char	*str)
{
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

size_t	ft_strlcat(char	*dst, const char	*src, size_t dstsize)
{
	size_t	i;
	size_t	d_len;
	size_t	s_len;

	i = 0;
	d_len = ft_strlen_dest(dst, dstsize);
	s_len = ft_strlens(src);
	if (dstsize == 0)
		return (s_len);
	if (dstsize <= d_len)
		return (s_len + dstsize);
	while (src[i] && i < dstsize - d_len - 1)
	{
		dst[d_len + i] = src[i];
		i++;
	}
	dst[d_len + i] = '\0';
	return (s_len + d_len);
}
