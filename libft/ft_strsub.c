/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdrias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 14:26:16 by fdrias            #+#    #+#             */
/*   Updated: 2017/11/20 17:18:30 by fdrias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *stemp;

	if (!s)
		return (NULL);
	stemp = ft_strnew(len);
	if (stemp)
	{
		while (start--)
			s++;
		ft_strncpy(stemp, s, len);
		stemp[len] = '\0';
	}
	return (stemp);
}
