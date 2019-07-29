#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;
	int res;

	i = 0;
	res = 0;
	while (i < n)
	{
		res = ft_strcmp(*s1, *s2);
		i++;
	}
	return (res);
}
