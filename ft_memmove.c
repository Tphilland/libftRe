/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphillan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 20:20:48 by tphillan          #+#    #+#             */
/*   Updated: 2019/07/15 14:44:00 by tphillan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*udst;
	const char	*usrc;

	i = 0;
	udst = (char *)dst;
	usrc = (const char *)src;
	if (!dst && !src)
		return (NULL);
	if (usrc < udst)
	{
		while (len-- > 0)
		{
			udst[len] = usrc[len];
		}
	}
	else
	{
		while (i < len)
		{
			udst[i] = usrc[i];
			i++;
		}
	}
	return (dst);
}
