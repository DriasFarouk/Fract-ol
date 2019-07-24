/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdrias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 13:56:17 by fdrias            #+#    #+#             */
/*   Updated: 2017/11/17 16:11:26 by fdrias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_nbw(char *s, char c)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (*s)
	{
		if (count == 0 && *s != c)
		{
			count = 1;
			i++;
		}
		else if (count == 1 && *s == c)
			count = 0;
		s++;
	}
	return (i);
}

static int		ft_strlenc(char *s, char c)
{
	int		len;

	len = 0;
	while (*s != c && *s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

char			**ft_strsplit(char const *s, char c)
{
	int		nbw;
	char	**tab;
	int		i;

	if (!s)
		return (NULL);
	nbw = ft_nbw((char *)s, c);
	tab = (char **)malloc((nbw + 1) * sizeof(char*));
	i = 0;
	if (!tab)
		return (NULL);
	while (nbw--)
	{
		while (*s == c && *s != '\0')
			s++;
		tab[i] = ft_strsub((char *)s, 0, ft_strlenc((char *)s, c));
		if (!tab[i])
			return (NULL);
		s = s + ft_strlenc((char *)s, c);
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
