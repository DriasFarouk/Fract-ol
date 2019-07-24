/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdrias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 12:12:34 by fdrias            #+#    #+#             */
/*   Updated: 2017/11/09 15:00:29 by fdrias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char *stsrc;
	char *stdest;

	stsrc = (char*)src;
	stdest = (char*)dest;
	if (stsrc < stdest)
	{
		stsrc = stsrc + n - 1;
		stdest = stdest + n - 1;
		while (n > 0)
		{
			*stdest-- = *stsrc--;
			n--;
		}
	}
	else
	{
		while (n > 0)
		{
			*stdest++ = *stsrc++;
			n--;
		}
	}
	return (dest);
}
