/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdrias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 13:13:11 by fdrias            #+#    #+#             */
/*   Updated: 2017/11/18 18:26:58 by fdrias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *stsrc;

	stsrc = (unsigned char*)s;
	while (n > 0 && *stsrc != (unsigned char)c)
	{
		n--;
		stsrc++;
	}
	if (n == 0)
		return (NULL);
	else
		return (stsrc);
}
