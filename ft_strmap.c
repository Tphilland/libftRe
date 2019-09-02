/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphillan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 13:54:29 by tphillan          #+#    #+#             */
/*   Updated: 2019/09/02 13:54:33 by tphillan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char *str;
	int i;
	
	if (s == NULL || f == NULL)
		return (NULL);
	i = ft_strlen(s);
	str = (char *)malloc(i * sizeof(char));
	return (str);
}
