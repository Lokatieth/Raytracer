/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_menu_spot_mod_btn_type.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbauguen <vbauguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/04 13:49:53 by vbauguen          #+#    #+#             */
/*   Updated: 2017/02/04 13:49:53 by vbauguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "raystruct.h"

void			menu_spot_mod_btn_type(void *gen, void *mlx)
{
	t_mlx	*m;

	m = mlx;
	m->menu.spot->type = m->menu.spot_type;
	(void)m;
	(void)gen;
	(void)mlx;
}