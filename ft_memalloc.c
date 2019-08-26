#include "libft"

void	*ft_memalloc(size_t size)
{
	void *s;
	s = (void *)malloc(size*sizeof(void) + 1);
}
