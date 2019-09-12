#include	"libft.h"

/*My program allocates many(unknown number) pieces of memory and gives those small pieces to
 * a two 2D matrix filled with characters from string s, 
 *
 *The program has to know the size of the string s, and to treat char c as the null terminator.
 *The program should also go back to string s, disect it like that in portions, (using c as a terminator) until the end of 
 * the string
 * */

int	stringcount(char *s, char c)
{
	int i;

	i = 0;
	while(s[i] != c || s[i] != '\0')
		i++;
	return (i);
}

char **ft_strsplit(char const *s, char c)
{
	int i;
	int j;
	int k;
	char **str;

	j = strcount(s, c);
	k = i = 0;
	str = (char **)malloc( j * sizeof(char *) + 1);
	str[k] = ft_strncpy(str[k], s, j);
	str[k][j + 1] = '\0';
	return (str);
}
	
