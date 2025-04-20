/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshakeri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 20:06:27 by rshakeri          #+#    #+#             */
/*   Updated: 2025/04/16 20:11:40 by rshakeri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*cs;
	unsigned char	*cd;

	if (!dst && !src)
		return (NULL);
	cs = (unsigned char *)src;
	cd = (unsigned char *)dst;
	if (dst > src)
	{
		while (len-- > 0)
			cd[len] = cs[len];
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
