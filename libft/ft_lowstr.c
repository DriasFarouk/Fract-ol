/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lowstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdrias <fdrias@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/01 18:19:42 by fdrias            #+#    #+#             */
/*   Updated: 2018/10/15 17:04:02 by fdrias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_lowstr(char *str)
{
	char	*tmp;
	int		i;

	if (!(tmp = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1))))
		exit(0);
	i = 0;
	while (str[i] != '\0')
	{
		tmp[i] = ft_tolower(str[i]);
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}
