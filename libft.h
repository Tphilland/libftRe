/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphillan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 12:45:15 by tphillan          #+#    #+#             */
/*   Updated: 2019/07/12 13:13:24 by tphillan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef LIBFT_H
# define LIBFT_H
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s);
size_t	ft_strnlen(const char *s, size_t maxlen);
void	ft_bzero(void *s, size_t n);

#endif

