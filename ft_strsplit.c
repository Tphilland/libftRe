#include	"libft.h"

/*My function creates an unknown number of pieces of memory(might vary in size), take those pieces of memory
 * fill them with portions of string s,and give those small pieces of string s to
 * a double pointer. 
 *
 *The program has to know the size of the string s, and to treat char c as the end of the small strings that will then be copied 
 *to the memory.
 *The program should also go back to string s, cut it in portions (using c as a terminator) until the end of 
 * the string s.
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
	
