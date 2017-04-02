/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atob.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbauguen <vbauguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 01:23:15 by vbauguen          #+#    #+#             */
/*   Updated: 2017/03/02 00:37:00 by vbauguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <math.h>

double	ft_atob(char *str)
{
	double			t;
	double			tmp;
	char			n;

	if (str[0] == '-')
		n = 1;
	else
		n = 0;
	t = ft_atoi(str);
	if (ft_strchr(str, '.'))
	{
		str += (ft_strlen(str) - ft_strlen(ft_strchr(str, '.'))) + 1;
		tmp = ft_atoi(str);
		tmp = tmp / pow(10, ft_strlen(str));
		if (!n)
			t += tmp;
		else
			t -= tmp;
	}
	return (t);
}
