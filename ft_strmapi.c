#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *t;
	int i;
	if (s == NULL || f == NULL)
		return (NULL);
	i = ft_strlen(s);
	t = (char *)malloc(i * sizeof(char));
	return (t);
}
