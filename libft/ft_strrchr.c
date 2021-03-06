/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbauguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 19:27:21 by vbauguen          #+#    #+#             */
/*   Updated: 2015/11/25 19:33:54 by vbauguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char const *s, int c)
{
	int		i;
	int		last;

	last = -1;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			last = i;
		i++;
	}
	if (s[i] == c)
		return ((char*)s + i);
	if (last >= 0)
		return ((char*)s + last);
	return (NULL);
}
