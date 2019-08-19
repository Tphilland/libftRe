#include "libft.h"

char	*ft_strnew(size_t size)
{
	size_t i;
	char *s;

	i = 0;
	s = (char *)malloc(size * sizeof(char) + 1);
	while(i <= size)
		s[i++] = '\0';
	s[i] = '\0';
	return (s);
}	
