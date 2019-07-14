/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphillan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 19:11:56 by tphillan          #+#    #+#             */
/*   Updated: 2019/07/14 19:41:05 by tphillan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src,int c, size_t n)
{
	char *cdst;
	const char *csrc;
	size_t i;

	cdst = (char *)dst;
	csrc = (const char *)src;
	i = 0;
	while (i < n)
	{
		if (csrc[i] == c)
			return (&csrc[i + 1]);
		cdst[i] = csrc[i];
		i++;
	}
	return (NULL);
}
