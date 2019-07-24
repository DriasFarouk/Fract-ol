/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdrias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 12:46:02 by fdrias            #+#    #+#             */
/*   Updated: 2017/11/10 12:55:22 by fdrias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*temp;

	temp = s;
	temp = temp + ft_strlen(s);
	while (*temp != (char)c && temp != s)
		temp--;
	if (*temp == (char)c)
		return ((char *)temp);
	return (NULL);
}
