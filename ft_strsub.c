/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphillan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 14:38:51 by tphillan          #+#    #+#             */
/*   Updated: 2019/08/20 15:03:00 by tphillan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *t;

	t = (char *)malloc( len * sizeof(char) + 1);
	while (i < len)
	{
		t[i++] = s[start++];
	}
	t[i] = '\0';
	return (t);
}
