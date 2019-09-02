/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphillan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 13:55:08 by tphillan          #+#    #+#             */
/*   Updated: 2019/09/02 13:55:15 by tphillan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *t;
	int i;
	if (s == NULL || f == NULL)
		return (NULL);
	i = ft_strlen(s);
	t = (char *)malloc(i * sizeof(char));
	return (t);
}
