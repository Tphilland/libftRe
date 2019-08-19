#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, int n)
{
	int i;

	i = 0;
	while (i < n && s1[i] == s2[i])
	{
		if (s1[i] == '\0' && s1[i] == '\0')
			return (1);
		else
			i++;
	}
	if (s1[i] == s2[i])
		return (1);
	return (0);
}
