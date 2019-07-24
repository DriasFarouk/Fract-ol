/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdrias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 15:05:09 by fdrias            #+#    #+#             */
/*   Updated: 2017/11/20 17:17:38 by fdrias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *stemp;

	if (!s1 || !s2)
		return (NULL);
	if (!(stemp = ft_strnew((ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (NULL);
	stemp = ft_strcat(ft_strcpy(stemp, s1), s2);
	return (stemp);
}
