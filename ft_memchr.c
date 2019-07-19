/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphillan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 20:22:57 by tphillan          #+#    #+#             */
/*   Updated: 2019/07/15 14:35:54 by tphillan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	const char	*usrc;
	unsigned char	uc;

	usrc = (const char *)s;
	uc = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (usrc[i] == uc)
		{
			return (usrc);
		}
		i++;
		usrc++;
	}
	return (NULL);
}
