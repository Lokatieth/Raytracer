/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbauguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 13:52:49 by vbauguen          #+#    #+#             */
/*   Updated: 2015/11/29 15:21:52 by vbauguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	char	c;
	int		i;
	int		j;

	i = 0;
	j = ft_strlen(str) - 1;
	while (str[i] && i < j)
	{
		c = str[j];
		str[j] = str[i];
		str[i] = c;
		++i;
		--j;
	}
	return (str);
}
