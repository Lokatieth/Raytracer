/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_menu_btn_right.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbauguen <vbauguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/04 13:48:53 by vbauguen          #+#    #+#             */
/*   Updated: 2017/02/04 13:48:53 by vbauguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "raystruct.h"

void			menu_btn_right(void *gen, void *mlx)
{
	t_mlx	*m;

	m = mlx;
	if (m->scene == RT && m->menu.draw == 1)
		menu_load_btn_next(gen, mlx);
	(void)gen;
	(void)mlx;
}