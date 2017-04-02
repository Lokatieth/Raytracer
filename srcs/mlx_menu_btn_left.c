/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_menu_btn_left.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbauguen <vbauguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/04 13:48:51 by vbauguen          #+#    #+#             */
/*   Updated: 2017/02/04 13:48:52 by vbauguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "raystruct.h"

void			menu_btn_left(void *gen, void *mlx)
{
	t_mlx	*m;

	m = mlx;
	if (m->scene == RT && m->menu.draw == 1)
		menu_load_btn_prev(gen, mlx);
	(void)gen;
	(void)mlx;
}
