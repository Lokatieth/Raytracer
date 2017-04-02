/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_menu_save_btn_open.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbauguen <vbauguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/04 13:49:30 by vbauguen          #+#    #+#             */
/*   Updated: 2017/02/04 13:49:30 by vbauguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "raystruct.h"

void			menu_save_btn_open(void *gen, void *mlx)
{
	t_gen	*d;

	d = gen;
	if (d->sc)
		print_scene(d->sc);
	(void)mlx;
}
