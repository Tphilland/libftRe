#include "libft.h"

void	putstr_fd(char const *s, int fd)
{
	int i;

	i = 0;
	while(s[i] != '\0')
		write(fd, &s[i++], 1);
}
