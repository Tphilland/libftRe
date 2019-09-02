/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphillan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 01:00:59 by tphillan          #+#    #+#             */
/*   Updated: 2019/08/27 01:33:31 by tphillan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;
	int j;
	int k;

	j = 0;
	if (needle == '\0')
		return ((char *)haystack);
	i = ft_strlen(needle);
	while (haystack[j])
	{
		k = 0;
		while ((needle[k] == haystack[k + j]) && ((k + j) < (int)len))
		{
			if (k == i - 1)
				return ((char *)(haystack + j));
			k++;
		}
		j++;
	}
	return (NULL);
}
