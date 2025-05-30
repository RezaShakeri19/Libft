/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshakeri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 18:41:20 by rshakeri          #+#    #+#             */
/*   Updated: 2025/04/19 19:00:58 by rshakeri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	intlen(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static char	*int2char(char *str, int n)
{
	int	i;

	i = intlen(n);
	str[i] = '\0';
	if (n < 0)
	{
		*str = '-';
		n *= -1;
	}
	while (n > 0)
	{
		str[--i] = (n % 10) + 48;
		n /= 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	str = malloc(sizeof(char) * (intlen(n) + 1));
	if (!str)
		return (NULL);
	return (int2char(str, n));
}
