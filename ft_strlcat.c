/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshakeri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 18:43:08 by rshakeri          #+#    #+#             */
/*   Updated: 2025/04/17 18:51:35 by rshakeri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	size;

	if (!dstsize)
		return (ft_strlen(src));
	size = ft_strlen(dst);
	if (size > dstsize)
		return (ft_strlen(src) + dstsize);
	i = 0;
	while (i + size < dstsize - 1 && src[i])
	{
		dst[size + 1] = src[i];
		i++;
	}
	dst[size + i] = '\0';
	return (size + ft_strlen(src));
}
