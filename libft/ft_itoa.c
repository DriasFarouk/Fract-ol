/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdrias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 15:37:02 by fdrias            #+#    #+#             */
/*   Updated: 2017/11/17 18:15:32 by fdrias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	ft_lnb(int n)
{
	long	len;

	if (n == 0)
		return (1);
	len = 0;
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len++);
}

static int	ft_sign(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

char		*ft_itoa(int n)
{
	long	longn;
	long	len;
	char	*s;

	longn = n;
	len = ft_lnb(n);
	s = ft_strnew(len + 1);
	if (!s)
		return (NULL);
	s[len] = '\0';
	len--;
	if (longn < 0)
		longn = -longn;
	while (len >= 0)
	{
		s[len] = (longn % 10) + '0';
		len--;
		longn /= 10;
	}
	if (ft_sign(n))
		s[0] = '-';
	return (s);
}
