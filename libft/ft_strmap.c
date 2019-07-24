/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdrias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 14:37:19 by fdrias            #+#    #+#             */
/*   Updated: 2017/11/20 16:21:27 by fdrias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (f)(char))
{
	int		i;
	char	*s2;

	if (!s || !f)
		return (NULL);
	s2 = ft_strnew(ft_strlen(s));
	if (s2 == NULL)
		return (NULL);
	i = -1;
	while (s[++i] != '\0')
		s2[i] = f(s[i]);
	return (s2);
}
