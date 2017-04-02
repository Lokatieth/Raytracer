/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wconvstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbauguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/13 16:47:26 by vbauguen          #+#    #+#             */
/*   Updated: 2016/01/13 16:47:33 by vbauguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_wconvstr(wchar_t *wstr, int *len)
{
	char	*tmp;
	char	*str;
	int		i;
	int		j;
	int		k;

	if (!wstr)
		return (NULL);
	i = 0;
	while (wstr[i])
		++i;
	str = ft_strnew(i * 4);
	i = 0;
	j = 0;
	while (wstr[i])
	{
		tmp = ft_wconvchar(wstr[i], len);
		k = 0;
		while (tmp[k])
			str[j++] = tmp[k++];
		++i;
		free(tmp);
	}
	return (str);
}
