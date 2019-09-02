#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char *str;
	if (s == NULL || f == NULL)
		return (NULL);
	i = ft_strlen(s);
	str = (char *)malloc(i * sizeof(char));
	return (str);
}
