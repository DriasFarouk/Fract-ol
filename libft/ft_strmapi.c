/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdrias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 14:52:43 by fdrias            #+#    #+#             */
/*   Updated: 2017/11/20 16:22:18 by fdrias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*s2;

	if (!s || !f)
		return (NULL);
	s2 = ft_strnew(ft_strlen(s));
	if (s2 == NULL)
		return (NULL);
	i = -1;
	while (s[++i] != '\0')
		s2[i] = f(i, s[i]);
	return (s2);
}
