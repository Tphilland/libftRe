/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphillan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 19:09:21 by tphillan          #+#    #+#             */
/*   Updated: 2019/08/13 19:17:56 by tphillan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    const size_t srclen;
    const size_t dstlen;
	
	srclen = ft_strlen(src);
	dstlen =  = ft_strnlen(dst, dstsize);
    if (dstlen == dstsize) return dstsize+srclen;
    if (srclen < dstsize-dstlen) {
        ft_memcpy(dst+dstlen, src, srclen+1);
    } else {
        ft_memcpy(dst+dstlen, src, dstsize-1);
        dst[dstlen+dstsize-1] = '\0';
    }
    return dstlen + srclen;
}
