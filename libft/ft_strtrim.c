/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdrias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 20:11:43 by fdrias            #+#    #+#             */
/*   Updated: 2017/11/20 17:19:07 by fdrias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	unsigned int	d;
	int				f;

	if (!s)
		return (NULL);
	d = 0;
	f = (int)ft_strlen(s) - 1;
	while ((s[d] == ' ' || s[d] == '\t' || s[d] == '\n') && s[d])
		d++;
	while ((s[f] == ' ' || s[f] == '\t' || s[f] == '\n') && f > (int)d)
		f--;
	return (ft_strsub(s, d, (f - d + 1)));
}
