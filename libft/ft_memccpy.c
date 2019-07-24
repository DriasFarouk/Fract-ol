/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdrias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 20:18:50 by fdrias            #+#    #+#             */
/*   Updated: 2017/11/17 18:41:38 by fdrias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*cpysrc;
	unsigned char	*cpydest;

	c = (unsigned char)c;
	cpysrc = (unsigned char*)src;
	cpydest = (unsigned char*)dest;
	while (n > 0 && *cpysrc != c)
	{
		n--;
		*cpydest++ = *cpysrc++;
	}
	if (n > 0)
	{
		n--;
		*cpydest++ = *cpysrc++;
		return (cpydest);
	}
	else
		return (0);
}
