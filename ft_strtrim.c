#include "libft.h"

/*Allocates (with malloc(3)) and returns a copy of the string
 * given as argument without whitespaces at the beginning or at
 * the end of the string. Will be considered as whitespaces the
 * following characters ’ ’, ’\n’ and ’\t’. If s has no whitespaces at the beginning or at the end, the function returns a
 * copy of s. If the allocation fails the function returns NULL. */

ar    *ft_strtrim(char const *s)
{
	int i;
	int j;
	int k;
	int m;
	char *str;

	i = 0;
	j = 0;
	k = 0;
	if (s == NULL)
		return (NULL);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	m = i;
	while ( !(s[i] == ' ' || s[i] == '\n' || s[i++] == '\t'))
		j++;
	str = (char *)malloc(j * sizeof(char) + 1);
	while (k < j)
	{
		str[k] = s[m + k];
		k++;
	}
	str[k] = '\0'; 
	return (str);
}
