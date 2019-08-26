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

	if (*needle == '\0')
		return ((char *)haystack);
	j = ft_strlen(needle);
	while (haystack[i])
	{
		while ((needle[k] == haystack[k + i]) && ((k + i) < (int)len))
		{
			if (c == a - 1)
				return ((char *)(big + b));
			k++;
		}
		i++;
	}
	return (NULL);
}
