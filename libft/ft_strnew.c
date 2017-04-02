/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbauguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 12:56:17 by vbauguen          #+#    #+#             */
/*   Updated: 2015/12/13 13:59:04 by vbauguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*tmp;
	size_t	i;

	tmp = (char*)malloc(sizeof(char) * (size + 1));
	if (tmp == NULL)
		return (NULL);
	i = 0;
	while (i < size + 1)
	{
		tmp[i] = '\0';
		i++;
	}
	return (tmp);
}
