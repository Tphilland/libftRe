/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphillan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 20:26:27 by tphillan          #+#    #+#             */
/*   Updated: 2019/07/15 14:49:12 by tphillan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	int i;
	size_t j;

	i = 0;
	j = (size_t)i;
	while (src[i] != '\0' && j <= len)
	{
		dst[i] = src[i];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst);
}
